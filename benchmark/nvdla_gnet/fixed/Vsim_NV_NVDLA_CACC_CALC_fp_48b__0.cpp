// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_slcg_cell_2__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__3__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__3__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__3__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__3__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__4__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__4__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__4__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__4__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__5__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__5__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__5__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__5__A = 0;
    // Body
    if ((1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4944[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4944[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4944[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4943[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4943[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4943[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1) 
               & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4944[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4944[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4944[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4943[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4943[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4943[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1) 
                      & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__3__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__3__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__3__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__3__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__3__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__4__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__5__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__4__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__5__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__5__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1) 
               & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1) 
                      & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__5__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__5__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__4__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__4__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1)));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__0__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__0__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__0__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__0__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__1__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__1__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__1__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__1__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__2__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__2__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__2__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__2__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__1__A = (0x0000000fffffffffULL 
                                             & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__2__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__1__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__2__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__2__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__2__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__2__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__1__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__1__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__0__A = (0x0000000fffffffffULL 
                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__0__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__0__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__0__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__0__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_0_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4944[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4944[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4944[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4943[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4943[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4943[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_1__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__9__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__9__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__9__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__9__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__10__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__10__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__10__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__10__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__11__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__11__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__11__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__11__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 1U)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4946[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4946[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4946[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4945[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4945[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4945[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 1U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4946[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4946[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4946[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4945[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4945[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4945[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 1U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__9__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__9__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__9__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__9__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__9__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__10__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__11__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__10__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__11__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__11__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 1U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 1U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__11__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__11__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__10__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__10__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_1__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 1U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 1U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_1__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__6__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__6__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__6__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__6__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__7__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__7__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__7__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__7__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__8__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__8__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__8__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__8__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__7__A = (0x0000000fffffffffULL 
                                             & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__8__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__7__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__8__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__8__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__8__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__8__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__7__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__7__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__6__A = (0x0000000fffffffffULL 
                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__6__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__6__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__6__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__6__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_1__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 1U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_1_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4946[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4946[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4946[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4945[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4945[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4945[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_2__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__15__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__15__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__15__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__15__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__16__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__16__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__16__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__16__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__17__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__17__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__17__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__17__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 2U)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4948[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4948[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4948[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4947[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4947[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4947[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 2U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4948[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4948[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4948[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4947[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4947[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4947[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 2U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__15__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__15__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__15__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__15__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__15__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__16__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__17__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__16__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__17__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__17__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 2U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 2U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__17__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__17__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__16__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__16__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_2__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 2U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 2U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 2U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_2__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__12__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__12__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__12__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__12__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__13__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__13__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__13__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__13__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__14__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__14__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__14__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__14__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__13__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__14__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__13__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__14__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__14__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__14__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__14__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__13__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__13__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__12__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__12__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__12__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__12__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__12__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_2__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 2U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_2_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4948[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4948[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4948[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4947[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4947[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4947[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_3__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__21__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__21__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__21__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__21__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__22__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__22__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__22__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__22__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__23__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__23__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__23__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__23__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 3U)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4950[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4950[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4950[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4949[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4949[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4949[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 3U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4950[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4950[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4950[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4949[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4949[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4949[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 3U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__21__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__21__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__21__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__21__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__21__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__22__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__23__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__22__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__23__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__23__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 3U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 3U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__23__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__23__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__22__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__22__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_3__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 3U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 3U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 3U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_3__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__18__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__18__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__18__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__18__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__19__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__19__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__19__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__19__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__20__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__20__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__20__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__20__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__19__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__20__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__19__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__20__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__20__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__20__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__20__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__19__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__19__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__18__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__18__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__18__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__18__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__18__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_3__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 3U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_3_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4950[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4950[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4950[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4949[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4949[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4949[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_4__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__27__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__27__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__27__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__27__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__28__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__28__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__28__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__28__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__29__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__29__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__29__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__29__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 4U)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4952[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4952[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4952[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4951[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4951[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4951[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 4U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4952[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4952[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4952[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4951[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4951[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4951[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 4U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__27__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__27__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__27__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__27__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__27__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__28__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__29__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__28__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__29__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__29__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 4U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 4U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__29__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__29__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__28__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__28__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_4__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 4U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 4U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 4U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_4__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__24__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__24__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__24__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__24__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__25__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__25__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__25__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__25__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__26__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__26__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__26__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__26__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__25__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__26__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__25__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__26__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__26__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__26__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__26__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__25__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__25__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__24__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__24__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__24__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__24__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__24__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_4__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 4U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_4_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4952[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4952[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4952[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4951[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4951[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4951[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_5__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__33__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__33__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__33__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__33__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__34__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__34__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__34__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__34__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__35__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__35__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__35__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__35__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 5U)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4954[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4954[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4954[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4953[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4953[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4953[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 5U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4954[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4954[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4954[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4953[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4953[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4953[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 5U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__33__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__33__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__33__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__33__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__33__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__34__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__35__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__34__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__35__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__35__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 5U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 5U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__35__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__35__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__34__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__34__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_5__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 5U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 5U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 5U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_5__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_5__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__30__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__30__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__30__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__30__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__31__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__31__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__31__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__31__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__32__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__32__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__32__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__32__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__31__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__32__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__31__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__32__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__32__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__32__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__32__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__31__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__31__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__30__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__30__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__30__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__30__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__30__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_5__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 5U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_5_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4954[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4954[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4954[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4953[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4953[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4953[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_6__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__39__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__39__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__39__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__39__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__40__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__40__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__40__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__40__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__41__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__41__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__41__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__41__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 6U)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4956[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4956[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4956[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4955[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4955[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4955[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 6U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4956[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4956[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4956[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4955[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4955[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4955[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 6U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__39__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__39__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__39__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__39__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__39__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__40__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__41__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__40__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__41__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__41__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 6U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 6U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__41__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__41__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__40__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__40__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_6__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 6U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 6U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 6U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_6__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_6__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__36__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__36__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__36__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__36__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__37__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__37__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__37__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__37__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__38__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__38__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__38__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__38__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__37__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__38__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__37__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__38__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__38__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__38__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__38__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__37__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__37__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__36__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__36__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__36__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__36__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__36__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_6__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 6U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_6_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4956[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4956[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4956[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4955[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4955[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4955[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_7__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__45__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__45__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__45__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__45__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__46__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__46__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__46__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__46__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__47__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__47__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__47__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__47__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 7U)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4958[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4958[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4958[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4957[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4957[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4957[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 7U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4958[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4958[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4958[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4957[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4957[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4957[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 7U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__45__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__45__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__45__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__45__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__45__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__46__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__47__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__46__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__47__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__47__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 7U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 7U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__47__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__47__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__46__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__46__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_7__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 7U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 7U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 7U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_7__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_7__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__42__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__42__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__42__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__42__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__43__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__43__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__43__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__43__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__44__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__44__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__44__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__44__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__43__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__44__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__43__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__44__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__44__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__44__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__44__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__43__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__43__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__42__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__42__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__42__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__42__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__42__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_7__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 7U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_7_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4958[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4958[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4958[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4957[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4957[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4957[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_8__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__51__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__51__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__51__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__51__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__52__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__52__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__52__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__52__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__53__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__53__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__53__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__53__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 8U)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4960[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4960[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4960[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4959[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4959[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4959[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 8U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4960[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4960[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4960[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4959[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4959[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4959[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 8U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__51__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__51__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__51__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__51__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__51__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__52__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__53__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__52__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__53__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__53__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 8U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 8U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__53__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__53__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__52__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__52__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_8__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 8U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 8U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 8U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_8__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_8__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__48__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__48__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__48__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__48__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__49__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__49__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__49__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__49__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__50__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__50__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__50__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__50__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__49__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__50__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__49__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__50__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__50__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__50__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__50__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__49__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__49__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__48__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__48__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__48__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__48__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__48__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_8__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 8U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_8_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4960[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4960[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4960[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4959[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4959[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4959[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_9__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__57__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__57__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__57__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__57__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__58__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__58__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__58__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__58__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__59__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__59__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__59__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__59__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 9U)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4962[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4962[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4962[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4961[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4961[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4961[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 9U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4962[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4962[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4962[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4961[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4961[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4961[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 9U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__57__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__57__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__57__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__57__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__57__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__58__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__59__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__58__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__59__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__59__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 9U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 9U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__59__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__59__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__58__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__58__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_9__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 9U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 9U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 9U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_9__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_9__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__54__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__54__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__54__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__54__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__55__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__55__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__55__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__55__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__56__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__56__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__56__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__56__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__55__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__56__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__55__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__56__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__56__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__56__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__56__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__55__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__55__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__54__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__54__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__54__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__54__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__54__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_9__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 9U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_9_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4962[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4962[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4962[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4961[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4961[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4961[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_10__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__63__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__63__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__63__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__63__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__64__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__64__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__64__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__64__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__65__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__65__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__65__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__65__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000000aU)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4964[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4964[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4964[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4963[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4963[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4963[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 0x0000000aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4964[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4964[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4964[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4963[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4963[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4963[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000000aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__63__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__63__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__63__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__63__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__63__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__64__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__65__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__64__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__65__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__65__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 0x0000000aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000000aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__65__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__65__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__64__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__64__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_10__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_10__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 0x0000000aU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000000aU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000000aU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_10__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_10__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__60__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__60__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__60__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__60__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__61__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__61__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__61__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__61__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__62__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__62__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__62__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__62__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__61__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__62__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__61__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__62__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__62__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__62__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__62__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__61__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__61__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__60__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__60__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__60__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__60__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__60__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_10__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000000aU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_10_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4964[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4964[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4964[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4963[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4963[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4963[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_11__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__69__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__69__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__69__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__69__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__70__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__70__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__70__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__70__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__71__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__71__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__71__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__71__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000000bU)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4966[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4966[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4966[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4965[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4965[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4965[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 0x0000000bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4966[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4966[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4966[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4965[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4965[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4965[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000000bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__69__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__69__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__69__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__69__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__69__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__70__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__71__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__70__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__71__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__71__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 0x0000000bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000000bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__71__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__71__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__70__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__70__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_11__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_11__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 0x0000000bU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000000bU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000000bU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_11__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_11__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__66__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__66__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__66__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__66__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__67__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__67__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__67__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__67__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__68__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__68__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__68__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__68__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__67__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__68__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__67__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__68__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__68__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__68__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__68__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__67__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__67__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__66__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__66__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__66__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__66__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__66__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_11__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000000bU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_11_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    if (vlSelfRef.__PVT__in_nan) {
        vlSelfRef.__PVT__oi_expo = 0x000000ffU;
        vlSelfRef.__PVT__di_expo = 0xffU;
    } else {
        vlSelfRef.__PVT__oi_expo = ((0U != (0x000000ffffffffffULL 
                                            & vlSelfRef.__PVT__in_mask_op))
                                     ? (0x000000ffU 
                                        & (IData)((vlSelfRef.__PVT__in_mask_op 
                                                   >> 0x00000028U)))
                                     : 0U);
        vlSelfRef.__PVT__di_expo = ((0U != (0x0000003fffffffffULL 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__max_expo = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                  ? (IData)(vlSelfRef.__PVT__di_expo)
                                  : (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__oi_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__oi_expo)));
    vlSelfRef.__PVT__di_expo_shift = (0x000000ffU & 
                                      ((IData)(vlSelfRef.__PVT__max_expo) 
                                       - (IData)(vlSelfRef.__PVT__di_expo)));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = ((IData)((0x000000ffffffffffULL 
                              & ((0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U))))
                                  ? ((QData)((IData)(
                                                     (0x000007ffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                 >> 0x0000001dU))))) 
                                     << 0x0000001dU)
                                  : ((0x0000003fU == 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                  >> 0x00000026U))))
                                      ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                     << 8U);
    __Vtemp_2[2U] = (((IData)((0x000000ffffffffffULL 
                               & ((0x000000ffU == (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__in_mask_op 
                                                              >> 0x00000028U))))
                                   ? ((QData)((IData)(
                                                      (0x000007ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__in_mask_op 
                                                                  >> 0x0000001dU))))) 
                                      << 0x0000001dU)
                                   : ((0x0000003fU 
                                       == (0x0000003fU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                      >> 0x00000026U))))
                                       ? 0ULL : vlSelfRef.__PVT__in_mask_op)))) 
                      >> 0x00000018U) | ((IData)(((0x000000ffffffffffULL 
                                                   & ((0x000000ffU 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__in_mask_op 
                                                                   >> 0x00000028U))))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (0x000007ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x0000001dU))))) 
                                                       << 0x0000001dU)
                                                       : 
                                                      ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4966[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4966[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4966[2U] 
        = (0x0000ffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = ((IData)(((0x000000ffU == (0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__in_mask_op 
                                                          >> 0x00000028U))))
                               ? 0ULL : (0x0000000fffffffffULL 
                                         & ((0x0000003fU 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                     << 0x0000000cU);
    __Vtemp_5[2U] = (((IData)(((0x000000ffU == (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__in_mask_op 
                                                           >> 0x00000028U))))
                                ? 0ULL : (0x0000000fffffffffULL 
                                          & ((0x0000003fU 
                                              == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                 << (IData)(vlSelfRef.__PVT__di_lead_num)))))) 
                      >> 0x00000014U) | ((IData)(((
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__in_mask_op 
                                                                >> 0x00000028U))))
                                                    ? 0ULL
                                                    : 
                                                   (0x0000000fffffffffULL 
                                                    & ((0x0000003fU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4965[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4965[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4965[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_12__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_12__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__75__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__75__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__75__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__75__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__76__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__76__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__76__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__76__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__77__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__77__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__77__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__77__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000000cU)))) {
        vlSelfRef.__PVT__oi_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__oi_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__in_mask_op 
                                                                                >> 0x00000027U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4968[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4968[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4968[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4967[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4967[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4967[1U])) 
                                                         >> 8U)))));
    }
    if (vlSelfRef.__PVT__shift_vld) {
        vlSelfRef.__PVT__mant_sum_trans = ((IData)(vlSelfRef.__PVT__in_nan_d)
                                            ? (0x000003fffffffffcULL 
                                               & (vlSelfRef.__PVT__mant_sum 
                                                  << 2U))
                                            : ((0x000003fffffffffeULL 
                                                & (vlSelfRef.__PVT__mant_sum_scmp 
                                                   >> 2U)) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.__PVT__mant_sum_scmp)))))));
    }
    if (vlSelfRef.__PVT__msum_vld) {
        vlSelfRef.__PVT__partial_result_mant = (0x000000ffffffffffULL 
                                                & vlSelfRef.__PVT__partial_mant_nmlz_tmp);
        vlSelfRef.__PVT__partial_result_expo = ((IData)(vlSelfRef.__PVT__in_nan_2d)
                                                 ? 0x000000ffU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0x000000ffffffffffULL 
                                                   & vlSelfRef.__PVT__partial_mant_nmlz_tmp))
                                                  ? 
                                                 (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      - (IData)(vlSelfRef.__PVT__mant_sum_carry_neg))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__expo_trans) 
                                                      + (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))))
                                                  : 0U));
    }
    if (((IData)(vlSelfRef.__PVT__final_vld) & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = (((IData)((vlSelfRef.__PVT__partial_result 
                                              >> 0x00000027U)) 
                                     << 0x0000001fU) 
                                    | ((((0U != (0x000000ffffffffffULL 
                                                 & vlSelfRef.__PVT__partial_result))
                                          ? ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? 0x000000ffU
                                              : (0x000000ffU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__partial_result 
                                                              >> 0x00000028U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.__PVT__fp32_mant_carry) 
                                                      | (1U 
                                                         & ((~ 
                                                             (0U 
                                                              != 
                                                              (0x0000007fffffffffULL 
                                                               & vlSelfRef.__PVT__partial_result))) 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__partial_result 
                                                                       >> 0x00000027U)))))))))
                                          : 0U) << 0x00000017U) 
                                       | (0x007fffffU 
                                          & ((0x000000ffU 
                                              == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__partial_result 
                                                             >> 0x00000028U))))
                                              ? (0x000003ffU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__partial_result 
                                                            >> 0x0000001dU)))
                                              : (0x01ffffffU 
                                                 & VL_SHIFTRS_III(25,25,1, 
                                                                  (0x01ffffffU 
                                                                   & ((0x00ffffffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000fU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__partial_mant_abs 
                                                                                >> 0x0000000eU))))), (IData)(vlSelfRef.__PVT__fp32_mant_carry)))))));
    } else if (((IData)(vlSelfRef.__PVT__final_vld) 
                & (IData)(vlSelfRef.__PVT__final_sel))) {
        vlSelfRef.out_final_data = 0U;
    }
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    if (((IData)(vlSelfRef.__PVT__shift_vld) & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = (0x000000ffU 
                                       & (((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__in_aligned_expo)) 
                                          - (IData)(vlSelfRef.__PVT__msum_lead_num)));
    } else if (((IData)(vlSelfRef.__PVT__shift_vld) 
                & (~ (IData)(vlSelfRef.__PVT__in_nan_d)))) {
        vlSelfRef.__PVT__expo_trans = 0U;
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 0x0000000cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4968[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4968[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4968[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4967[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4967[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4967[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000000cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = 0U;
    }
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__mant_sum_carry_neg = (IData)((
                                                   (0x000002fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_carry_pos = (IData)((
                                                   (0x000001fffffffffcULL 
                                                    == 
                                                    (0x000003fffffffffcULL 
                                                     & vlSelfRef.__PVT__mant_sum_trans)) 
                                                   & (IData)(vlSelfRef.__PVT__mant_sum_point5)));
    vlSelfRef.__PVT__mant_sum_round = (0x000001ffffffffffULL 
                                       & (VL_EXTENDS_QQ(41,40, 
                                                        (0x000000ffffffffffULL 
                                                         & (vlSelfRef.__PVT__mant_sum_trans 
                                                            >> 2U))) 
                                          + VL_EXTENDS_QI(41,2, (IData)(vlSelfRef.__PVT__mant_sum_point5))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__75__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__75__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__75__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__75__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__75__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__76__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__77__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__76__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__77__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__77__A 
                                   >> (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x2cU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
            vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                        >> 0x0000000cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000000cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__77__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__77__Vfuncout;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x2bU) - (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 1U;
    if ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x00000fffffffffffULL & ((QData)((IData)(u1_dw_lsd__DOT____Vlvbound_h90638ce9__0)) 
                                           << (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__76__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__76__Vfuncout;
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    vlSelfRef.__PVT__mant_sum_scmp = (0x00001fffffffffffULL 
                                      & ((0U != (IData)(vlSelfRef.__PVT__msum_lead_num))
                                          ? VL_SHIFTL_QQI(45,45,32, 
                                                          (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                           << 1U), 
                                                          ((IData)(vlSelfRef.__PVT__msum_lead_num) 
                                                           - (IData)(1U)))
                                          : VL_SHIFTRS_QQI(45,45,32, 
                                                           (vlSelfRef.__PVT__u1_dw_lsd__DOT__a 
                                                            << 1U), 1U)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_12__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_12__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_partial_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                       & (~ (IData)(vlSelfRef.__PVT__msum_sel))));
    vlSelfRef.out_final_valid = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__final_vld) 
                                     & (IData)(vlSelfRef.__PVT__final_sel)));
    vlSelfRef.__PVT__in_nan_2d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__in_nan_d));
    vlSelfRef.__PVT__final_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(vlSelfRef.__PVT__msum_vld));
    vlSelfRef.__PVT__final_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && ((IData)(vlSelfRef.__PVT__msum_vld) 
                                      & (IData)(vlSelfRef.__PVT__msum_sel)));
    vlSelfRef.__PVT__in_nan_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__in_nan));
    vlSelfRef.__PVT__msum_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && (IData)(vlSelfRef.__PVT__shift_vld));
    vlSelfRef.__PVT__msum_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                 && ((IData)(vlSelfRef.__PVT__shift_vld) 
                                     & (IData)(vlSelfRef.__PVT__shift_sel)));
    vlSelfRef.__PVT__shift_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                    >> 0x0000000cU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000000cU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000000cU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_12__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_12__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__72__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__72__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__72__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__72__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__73__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__73__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__73__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__73__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__74__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__74__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__74__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__74__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__73__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__74__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__73__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__74__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__74__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__74__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__74__Vfuncout;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec = 0ULL;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp 
        = (0x0000003fU & ((IData)(0x23U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc)));
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 1U;
    if ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) {
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec 
            = (((~ (1ULL << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))) 
                & vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec) 
               | (0x0000000fffffffffULL & ((QData)((IData)(u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0)) 
                                           << (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp))));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__73__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__73__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__72__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__72__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__72__A 
                                   >> (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc 
                = (0x0000003fU & (((IData)(0x24U) - (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                                  - (IData)(2U)));
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        } else if ((0U == (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))) {
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
            vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 1U;
        }
        vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i 
            = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i) 
                              - (IData)(1U)));
    }
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__72__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__72__Vfuncout;
}
