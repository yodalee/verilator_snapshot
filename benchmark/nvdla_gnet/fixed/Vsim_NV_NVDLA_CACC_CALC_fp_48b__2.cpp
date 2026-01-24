// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_25__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_25__1\n"); );
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
                                                    >> 0x00000019U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000019U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000019U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_25__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_25__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__150__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__150__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__150__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__150__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__151__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__151__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__151__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__151__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__152__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__152__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__152__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__152__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__151__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__152__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__151__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__152__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__152__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__152__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__152__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__151__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__151__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__150__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__150__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__150__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__150__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__150__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_25__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_25__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000019U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_25_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4994[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4994[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4994[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_25_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4993[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4993[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4993[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_26__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_26__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__159__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__159__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__159__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__159__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__160__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__160__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__160__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__160__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__161__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__161__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__161__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__161__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000001aU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4996[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4996[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4996[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4995[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4995[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4995[1U])) 
                                                         >> 8U)))));
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
                        >> 0x0000001aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4996[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4996[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4996[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4995[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4995[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4995[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__159__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__159__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__159__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__159__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__159__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__160__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__161__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__160__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__161__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__161__A 
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
                        >> 0x0000001aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__161__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__161__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__160__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__160__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_26__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_26__1\n"); );
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
                                                    >> 0x0000001aU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000001aU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000001aU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_26__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_26__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__156__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__156__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__156__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__156__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__157__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__157__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__157__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__157__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__158__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__158__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__158__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__158__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__157__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__158__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__157__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__158__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__158__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__158__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__158__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__157__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__157__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__156__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__156__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__156__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__156__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__156__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_26__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_26__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000001aU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_26_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4996[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4996[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4996[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_26_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4995[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4995[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4995[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_27__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_27__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__165__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__165__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__165__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__165__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__166__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__166__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__166__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__166__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__167__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__167__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__167__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__167__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000001bU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4998[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4998[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4998[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4997[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4997[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4997[1U])) 
                                                         >> 8U)))));
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
                        >> 0x0000001bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4998[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4998[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4998[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4997[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4997[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4997[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__165__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__165__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__165__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__165__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__165__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__166__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__167__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__166__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__167__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__167__A 
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
                        >> 0x0000001bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__167__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__167__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__166__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__166__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_27__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_27__1\n"); );
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
                                                    >> 0x0000001bU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000001bU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000001bU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_27__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_27__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__162__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__162__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__162__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__162__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__163__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__163__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__163__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__163__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__164__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__164__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__164__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__164__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__163__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__164__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__163__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__164__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__164__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__164__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__164__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__163__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__163__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__162__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__162__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__162__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__162__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__162__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_27__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_27__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000001bU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_27_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4998[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4998[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4998[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_27_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4997[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4997[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4997[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_28__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_28__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__171__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__171__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__171__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__171__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__172__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__172__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__172__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__172__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__173__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__173__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__173__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__173__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000001cU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5000[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5000[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5000[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4999[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4999[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4999[1U])) 
                                                         >> 8U)))));
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
                        >> 0x0000001cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5000[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5000[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5000[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4999[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4999[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4999[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__171__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__171__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__171__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__171__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__171__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__172__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__173__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__172__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__173__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__173__A 
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
                        >> 0x0000001cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__173__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__173__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__172__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__172__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_28__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_28__1\n"); );
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
                                                    >> 0x0000001cU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000001cU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000001cU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_28__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_28__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__168__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__168__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__168__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__168__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__169__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__169__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__169__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__169__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__170__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__170__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__170__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__170__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__169__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__170__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__169__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__170__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__170__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__170__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__170__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__169__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__169__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__168__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__168__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__168__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__168__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__168__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_28__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_28__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000001cU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_28_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5000[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5000[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5000[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_28_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4999[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4999[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4999[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_29__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_29__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__177__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__177__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__177__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__177__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__178__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__178__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__178__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__178__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__179__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__179__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__179__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__179__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000001dU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5002[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5002[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5002[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5001[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5001[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5001[1U])) 
                                                         >> 8U)))));
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
                        >> 0x0000001dU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5002[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5002[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5002[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5001[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5001[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5001[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001dU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__177__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__177__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__177__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__177__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__177__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__178__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__179__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__178__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__179__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__179__A 
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
                        >> 0x0000001dU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001dU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__179__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__179__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__178__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__178__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_29__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_29__1\n"); );
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
                                                    >> 0x0000001dU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000001dU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000001dU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_29__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_29__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__174__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__174__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__174__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__174__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__175__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__175__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__175__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__175__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__176__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__176__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__176__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__176__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__175__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__176__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__175__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__176__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__176__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__176__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__176__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__175__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__175__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__174__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__174__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__174__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__174__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__174__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_29__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_29__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000001dU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_29_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5002[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5002[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5002[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_29_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5001[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5001[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5001[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_30__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_30__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__183__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__183__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__183__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__183__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__184__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__184__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__184__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__184__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__185__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__185__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__185__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__185__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000001eU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5004[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5004[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5004[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5003[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5003[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5003[1U])) 
                                                         >> 8U)))));
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
                        >> 0x0000001eU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5004[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5004[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5004[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5003[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5003[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5003[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001eU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__183__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__183__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__183__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__183__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__183__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__184__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__185__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__184__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__185__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__185__A 
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
                        >> 0x0000001eU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001eU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__185__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__185__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__184__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__184__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_30__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_30__1\n"); );
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
                                                    >> 0x0000001eU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000001eU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000001eU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_30__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_30__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__180__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__180__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__180__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__180__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__181__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__181__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__181__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__181__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__182__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__182__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__182__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__182__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__181__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__182__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__181__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__182__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__182__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__182__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__182__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__181__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__181__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__180__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__180__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__180__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__180__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__180__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_30__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_30__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000001eU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_30_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5004[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5004[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5004[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_30_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5003[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5003[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5003[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_31__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_31__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__189__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__189__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__189__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__189__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__190__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__190__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__190__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__190__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__191__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__191__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__191__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__191__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000001fU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5006[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5006[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5006[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5005[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5005[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5005[1U])) 
                                                         >> 8U)))));
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
                        >> 0x0000001fU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5006[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5006[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5006[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5005[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5005[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5005[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001fU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__189__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__189__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__189__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__189__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__189__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__190__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__191__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__190__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__191__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__191__A 
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
                        >> 0x0000001fU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000001fU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__191__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__191__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__190__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__190__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_31__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_31__1\n"); );
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
                                                    >> 0x0000001fU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000001fU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000001fU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_31__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_31__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__186__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__186__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__186__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__186__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__187__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__187__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__187__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__187__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__188__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__188__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__188__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__188__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__187__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__188__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__187__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__188__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__188__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__188__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__188__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__187__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__187__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__186__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__186__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__186__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__186__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__186__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_31__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_31__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000001fU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_31_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5006[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5006[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5006[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_31_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5005[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5005[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5005[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_32__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_32__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__195__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__195__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__195__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__195__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__196__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__196__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__196__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__196__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__197__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__197__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__197__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__197__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000020U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5008[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5008[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5008[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5007[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5007[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5007[1U])) 
                                                         >> 8U)))));
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
                        >> 0x00000020U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5008[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5008[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5008[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5007[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5007[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5007[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000020U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__195__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__195__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__195__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__195__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__195__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__196__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__197__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__196__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__197__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__197__A 
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
                        >> 0x00000020U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000020U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__197__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__197__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__196__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__196__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_32__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_32__1\n"); );
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
                                                    >> 0x00000020U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000020U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000020U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_32__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_32__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__192__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__192__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__192__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__192__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__193__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__193__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__193__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__193__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__194__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__194__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__194__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__194__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__193__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__194__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__193__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__194__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__194__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__194__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__194__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__193__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__193__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__192__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__192__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__192__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__192__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__192__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_32__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_32__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000020U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_32_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5008[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5008[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5008[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_32_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5007[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5007[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5007[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_33__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_33__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__201__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__201__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__201__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__201__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__202__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__202__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__202__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__202__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__203__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__203__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__203__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__203__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000021U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5010[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5010[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5010[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5009[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5009[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5009[1U])) 
                                                         >> 8U)))));
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
                        >> 0x00000021U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5010[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5010[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5010[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5009[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5009[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5009[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000021U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__201__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__201__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__201__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__201__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__201__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__202__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__203__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__202__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__203__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__203__A 
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
                        >> 0x00000021U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000021U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__203__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__203__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__202__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__202__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_33__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_33__1\n"); );
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
                                                    >> 0x00000021U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000021U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000021U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_33__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_33__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__198__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__198__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__198__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__198__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__199__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__199__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__199__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__199__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__200__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__200__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__200__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__200__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__199__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__200__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__199__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__200__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__200__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__200__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__200__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__199__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__199__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__198__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__198__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__198__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__198__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__198__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_33__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_33__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000021U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_33_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5010[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5010[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5010[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_33_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5009[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5009[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5009[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_34__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_34__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__207__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__207__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__207__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__207__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__208__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__208__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__208__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__208__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__209__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__209__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__209__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__209__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000022U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5012[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5012[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5012[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5011[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5011[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5011[1U])) 
                                                         >> 8U)))));
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
                        >> 0x00000022U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5012[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5012[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5012[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5011[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5011[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5011[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000022U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__207__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__207__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__207__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__207__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__207__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__208__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__209__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__208__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__209__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__209__A 
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
                        >> 0x00000022U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000022U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__209__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__209__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__208__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__208__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_34__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_34__1\n"); );
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
                                                    >> 0x00000022U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000022U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000022U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_34__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_34__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__204__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__204__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__204__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__204__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__205__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__205__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__205__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__205__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__206__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__206__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__206__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__206__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__205__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__206__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__205__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__206__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__206__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__206__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__206__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__205__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__205__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__204__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__204__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__204__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__204__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__204__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_34__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_34__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000022U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_34_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5012[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5012[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5012[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_34_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5011[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5011[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5011[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_35__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_35__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__213__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__213__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__213__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__213__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__214__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__214__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__214__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__214__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__215__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__215__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__215__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__215__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000023U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5014[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5014[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5014[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5013[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5013[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5013[1U])) 
                                                         >> 8U)))));
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
                        >> 0x00000023U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5014[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5014[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5014[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5013[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5013[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5013[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000023U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__213__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__213__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__213__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__213__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__213__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__214__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__215__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__214__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__215__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__215__A 
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
                        >> 0x00000023U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000023U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__215__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__215__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__214__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__214__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_35__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_35__1\n"); );
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
                                                    >> 0x00000023U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000023U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000023U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_35__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_35__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__210__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__210__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__210__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__210__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__211__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__211__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__211__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__211__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__212__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__212__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__212__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__212__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__211__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__212__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__211__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__212__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__212__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__212__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__212__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__211__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__211__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__210__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__210__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__210__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__210__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__210__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_35__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_35__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000023U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_35_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5014[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5014[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5014[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_35_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5013[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5013[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5013[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_36__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_36__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__219__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__219__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__219__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__219__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__220__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__220__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__220__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__220__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__221__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__221__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__221__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__221__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000024U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5016[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5016[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5016[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5015[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5015[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5015[1U])) 
                                                         >> 8U)))));
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
                        >> 0x00000024U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5016[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5016[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5016[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5015[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5015[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5015[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000024U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__219__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__219__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__219__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__219__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__219__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__220__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__221__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__220__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__221__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__221__A 
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
                        >> 0x00000024U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000024U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__221__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__221__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__220__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__220__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_36__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_36__1\n"); );
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
                                                    >> 0x00000024U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000024U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000024U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_36__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_36__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__216__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__216__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__216__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__216__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__217__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__217__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__217__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__217__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__218__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__218__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__218__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__218__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__217__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__218__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__217__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__218__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__218__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__218__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__218__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__217__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__217__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__216__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__216__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__216__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__216__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__216__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_36__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_36__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000024U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_36_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5016[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5016[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5016[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_36_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5015[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5015[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5015[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_37__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_37__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__225__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__225__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__225__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__225__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__226__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__226__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__226__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__226__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__227__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__227__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__227__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__227__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000025U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5018[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5018[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5018[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5017[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5017[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5017[1U])) 
                                                         >> 8U)))));
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
                        >> 0x00000025U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5018[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5018[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5018[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5017[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5017[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5017[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000025U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__225__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__225__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__225__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__225__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__225__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__226__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__227__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__226__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__227__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__227__A 
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
                        >> 0x00000025U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000025U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__227__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__227__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__226__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__226__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_37__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_37__1\n"); );
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
                                                    >> 0x00000025U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000025U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000025U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_37__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_37__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__222__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__222__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__222__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__222__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__223__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__223__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__223__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__223__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__224__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__224__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__224__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__224__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__223__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__224__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__223__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__224__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__224__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__224__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__224__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__223__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__223__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__222__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__222__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__222__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__222__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__222__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_37__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_37__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000025U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_37_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5018[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5018[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5018[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_37_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5017[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5017[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5017[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_38__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_38__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__231__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__231__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__231__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__231__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__232__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__232__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__232__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__232__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__233__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__233__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__233__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__233__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000026U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5020[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5020[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5020[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5019[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5019[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5019[1U])) 
                                                         >> 8U)))));
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
                        >> 0x00000026U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5020[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5020[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5020[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5019[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5019[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5019[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000026U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__231__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__231__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__231__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__231__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__231__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__232__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__233__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__232__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__233__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__233__A 
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
                        >> 0x00000026U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000026U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__233__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__233__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__232__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__232__Vfuncout;
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
