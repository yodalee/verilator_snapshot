// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_51__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_51__1\n"); );
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
                                                    >> 0x00000033U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000033U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000033U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_51__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_51__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__306__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__306__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__306__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__306__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__307__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__307__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__307__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__307__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__308__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__308__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__308__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__308__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__307__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__308__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__307__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__308__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__308__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__308__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__308__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__307__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__307__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__306__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__306__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__306__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__306__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__306__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_51__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_51__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000033U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_51_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5046[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5046[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5046[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5045[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5045[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5045[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_52__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_52__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__315__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__315__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__315__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__315__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__316__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__316__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__316__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__316__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__317__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__317__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__317__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__317__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000034U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5048[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5048[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5048[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5047[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5047[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5047[1U])) 
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
                        >> 0x00000034U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5048[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5048[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5048[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5047[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5047[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5047[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000034U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__315__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__315__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__315__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__315__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__315__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__316__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__317__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__316__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__317__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__317__A 
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
                        >> 0x00000034U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000034U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__317__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__317__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__316__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__316__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_52__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_52__1\n"); );
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
                                                    >> 0x00000034U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000034U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000034U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_52__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_52__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__312__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__312__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__312__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__312__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__313__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__313__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__313__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__313__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__314__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__314__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__314__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__314__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__313__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__314__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__313__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__314__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__314__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__314__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__314__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__313__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__313__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__312__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__312__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__312__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__312__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__312__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_52__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_52__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000034U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_52_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5048[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5048[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5048[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5047[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5047[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5047[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_53__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_53__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__321__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__321__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__321__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__321__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__322__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__322__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__322__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__322__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__323__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__323__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__323__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__323__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000035U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5050[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5050[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5050[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5049[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5049[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5049[1U])) 
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
                        >> 0x00000035U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5050[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5050[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5050[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5049[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5049[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5049[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000035U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__321__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__321__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__321__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__321__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__321__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__322__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__323__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__322__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__323__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__323__A 
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
                        >> 0x00000035U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000035U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__323__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__323__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__322__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__322__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_53__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_53__1\n"); );
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
                                                    >> 0x00000035U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000035U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000035U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_53__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_53__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__318__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__318__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__318__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__318__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__319__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__319__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__319__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__319__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__320__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__320__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__320__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__320__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__319__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__320__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__319__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__320__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__320__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__320__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__320__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__319__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__319__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__318__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__318__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__318__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__318__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__318__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_53__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_53__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000035U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_53_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5050[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5050[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5050[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5049[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5049[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5049[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_54__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_54__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__327__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__327__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__327__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__327__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__328__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__328__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__328__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__328__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__329__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__329__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__329__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__329__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000036U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5052[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5052[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5052[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5051[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5051[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5051[1U])) 
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
                        >> 0x00000036U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5052[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5052[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5052[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5051[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5051[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5051[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000036U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__327__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__327__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__327__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__327__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__327__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__328__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__329__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__328__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__329__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__329__A 
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
                        >> 0x00000036U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000036U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__329__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__329__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__328__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__328__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_54__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_54__1\n"); );
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
                                                    >> 0x00000036U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000036U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000036U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_54__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_54__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__324__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__324__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__324__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__324__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__325__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__325__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__325__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__325__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__326__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__326__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__326__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__326__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__325__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__326__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__325__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__326__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__326__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__326__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__326__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__325__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__325__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__324__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__324__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__324__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__324__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__324__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_54__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_54__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000036U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_54_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5052[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5052[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5052[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5051[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5051[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5051[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_55__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_55__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__333__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__333__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__333__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__333__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__334__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__334__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__334__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__334__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__335__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__335__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__335__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__335__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000037U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5054[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5054[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5054[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5053[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5053[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5053[1U])) 
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
                        >> 0x00000037U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5054[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5054[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5054[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5053[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5053[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5053[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000037U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__333__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__333__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__333__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__333__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__333__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__334__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__335__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__334__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__335__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__335__A 
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
                        >> 0x00000037U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000037U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__335__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__335__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__334__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__334__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_55__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_55__1\n"); );
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
                                                    >> 0x00000037U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000037U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000037U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_55__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_55__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__330__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__330__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__330__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__330__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__331__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__331__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__331__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__331__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__332__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__332__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__332__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__332__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__331__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__332__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__331__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__332__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__332__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__332__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__332__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__331__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__331__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__330__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__330__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__330__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__330__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__330__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_55__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_55__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000037U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_55_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5054[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5054[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5054[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5053[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5053[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5053[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_56__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_56__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__339__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__339__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__339__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__339__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__340__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__340__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__340__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__340__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__341__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__341__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__341__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__341__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000038U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5056[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5056[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5056[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5055[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5055[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5055[1U])) 
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
                        >> 0x00000038U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5056[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5056[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5056[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5055[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5055[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5055[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000038U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__339__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__339__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__339__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__339__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__339__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__340__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__341__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__340__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__341__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__341__A 
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
                        >> 0x00000038U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000038U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__341__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__341__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__340__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__340__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_56__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_56__1\n"); );
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
                                                    >> 0x00000038U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000038U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000038U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_56__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_56__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__336__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__336__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__336__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__336__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__337__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__337__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__337__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__337__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__338__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__338__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__338__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__338__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__337__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__338__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__337__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__338__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__338__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__338__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__338__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__337__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__337__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__336__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__336__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__336__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__336__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__336__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_56__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_56__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000038U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_56_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5056[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5056[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5056[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5055[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5055[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5055[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_57__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_57__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__345__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__345__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__345__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__345__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__346__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__346__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__346__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__346__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__347__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__347__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__347__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__347__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x00000039U)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5058[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5058[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5058[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5057[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5057[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5057[1U])) 
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
                        >> 0x00000039U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5058[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5058[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5058[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5057[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5057[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5057[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000039U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__345__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__345__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__345__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__345__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__345__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__346__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__347__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__346__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__347__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__347__A 
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
                        >> 0x00000039U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x00000039U)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__347__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__347__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__346__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__346__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_57__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_57__1\n"); );
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
                                                    >> 0x00000039U))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x00000039U)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x00000039U)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_57__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_57__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__342__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__342__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__342__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__342__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__343__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__343__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__343__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__343__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__344__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__344__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__344__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__344__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__343__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__344__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__343__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__344__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__344__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__344__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__344__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__343__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__343__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__342__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__342__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__342__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__342__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__342__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_57__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_57__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000039U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_57_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5058[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5058[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5058[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_57_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5057[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5057[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5057[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_58__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_58__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__351__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__351__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__351__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__351__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__352__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__352__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__352__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__352__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__353__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__353__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__353__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__353__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000003aU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5060[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5060[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5060[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5059[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5059[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5059[1U])) 
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
                        >> 0x0000003aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5060[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5060[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5060[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5059[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5059[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5059[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000003aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__351__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__351__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__351__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__351__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__351__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__352__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__353__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__352__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__353__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__353__A 
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
                        >> 0x0000003aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000003aU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__353__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__353__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__352__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__352__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_58__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_58__1\n"); );
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
                                                    >> 0x0000003aU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000003aU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000003aU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_58__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_58__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__348__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__348__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__348__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__348__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__349__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__349__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__349__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__349__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__350__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__350__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__350__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__350__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__349__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__350__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__349__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__350__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__350__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__350__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__350__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__349__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__349__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__348__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__348__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__348__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__348__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__348__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_58__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_58__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000003aU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_58_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5060[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5060[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5060[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_58_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5059[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5059[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5059[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_59__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_59__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__357__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__357__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__357__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__357__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__358__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__358__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__358__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__358__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__359__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__359__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__359__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__359__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000003bU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5062[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5062[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5062[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5061[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5061[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5061[1U])) 
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
                        >> 0x0000003bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5062[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5062[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5062[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5061[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5061[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5061[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000003bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__357__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__357__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__357__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__357__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__357__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__358__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__359__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__358__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__359__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__359__A 
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
                        >> 0x0000003bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000003bU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__359__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__359__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__358__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__358__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_59__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_59__1\n"); );
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
                                                    >> 0x0000003bU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000003bU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000003bU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_59__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_59__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__354__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__354__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__354__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__354__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__355__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__355__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__355__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__355__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__356__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__356__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__356__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__356__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__355__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__356__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__355__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__356__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__356__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__356__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__356__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__355__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__355__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__354__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__354__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__354__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__354__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__354__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_59__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_59__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000003bU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_59_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5062[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5062[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5062[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_59_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5061[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5061[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5061[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_60__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_60__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__363__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__363__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__363__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__363__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__364__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__364__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__364__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__364__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__365__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__365__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__365__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__365__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000003cU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5064[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5064[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5064[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5063[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5063[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5063[1U])) 
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
                        >> 0x0000003cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5064[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5064[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5064[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5063[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5063[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5063[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000003cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__363__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__363__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__363__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__363__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__363__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__364__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__365__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__364__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__365__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__365__A 
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
                        >> 0x0000003cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000003cU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__365__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__365__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__364__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__364__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_60__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_60__1\n"); );
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
                                                    >> 0x0000003cU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000003cU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000003cU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_60__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_60__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__360__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__360__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__360__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__360__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__361__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__361__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__361__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__361__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__362__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__362__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__362__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__362__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__361__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__362__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__361__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__362__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__362__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__362__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__362__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__361__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__361__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__360__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__360__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__360__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__360__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__360__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_60__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_60__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000003cU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_60_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5064[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5064[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5064[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_60_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5063[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5063[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5063[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_61__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_61__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__369__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__369__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__369__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__369__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__370__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__370__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__370__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__370__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__371__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__371__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__371__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__371__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000003dU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5066[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5066[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5066[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5065[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5065[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5065[1U])) 
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
                        >> 0x0000003dU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5066[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5066[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5066[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5065[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5065[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5065[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000003dU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__369__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__369__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__369__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__369__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__369__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__370__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__371__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__370__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__371__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__371__A 
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
                        >> 0x0000003dU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000003dU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__371__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__371__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__370__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__370__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_61__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_61__1\n"); );
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
                                                    >> 0x0000003dU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000003dU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000003dU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_61__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_61__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__366__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__366__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__366__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__366__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__367__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__367__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__367__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__367__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__368__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__368__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__368__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__368__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__367__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__368__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__367__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__368__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__368__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__368__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__368__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__367__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__367__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__366__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__366__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__366__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__366__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__366__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_61__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_61__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000003dU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_61_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5066[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5066[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5066[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_61_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5065[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5065[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5065[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_62__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_62__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__375__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__375__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__375__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__375__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__376__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__376__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__376__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__376__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__377__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__377__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__377__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__377__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000003eU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5068[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5068[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5068[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5067[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5067[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5067[1U])) 
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
                        >> 0x0000003eU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5068[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5068[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5068[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5067[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5067[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5067[0U]))))))
                                             : 0U));
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000003eU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__375__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__375__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__375__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__375__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__375__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__376__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__377__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__376__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__377__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__377__A 
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
                        >> 0x0000003eU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((1U & ((IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                               >> 0x0000003eU)) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__377__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__377__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__376__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__376__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_62__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_62__1\n"); );
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
                                                    >> 0x0000003eU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (1U & ((IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                                     >> 0x0000003eU)) 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1 
                                                       >> 0x0000003eU)))));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_62__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_62__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__372__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__372__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__372__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__372__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__373__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__373__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__373__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__373__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__374__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__374__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__374__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__374__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__373__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__374__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__373__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__374__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__374__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__374__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__374__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__373__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__373__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__372__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__372__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__372__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__372__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__372__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_62__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_62__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000003eU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_62_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5068[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5068[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5068[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_62_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5067[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5067[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5067[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_63__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_63__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__381__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__381__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__381__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__381__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__382__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__382__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__382__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__382__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__383__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__383__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__383__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__383__A = 0;
    // Body
    if ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                       >> 0x0000003fU)))) {
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
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5070[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5070[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5070[1U])) 
                                                         >> 8U)))));
        vlSelfRef.__PVT__di_aligned_mant = (0x000000ffffffffffULL 
                                            & ((0x28U 
                                                <= (IData)(vlSelfRef.__PVT__di_expo_shift))
                                                ? (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
                                                                                >> 0x00000025U))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5069[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5069[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5069[1U])) 
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
    if ((IData)(((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                  >> 0x0000003fU) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_mant_cut = ((IData)(vlSelfRef.__VdfgRegularize_h3f0e3986_0_2)
                                         ? ((6U & (
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5070[1U] 
                                                   >> 5U)) 
                                            | (0U != 
                                               (0x0000003fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5070[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5070[0U]))))))
                                         : (((IData)(vlSelfRef.__PVT__di_expo) 
                                             < (IData)(vlSelfRef.__PVT__oi_expo))
                                             ? ((6U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5069[1U] 
                                                    >> 5U)) 
                                                | (0U 
                                                   != 
                                                   (0x0000003fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5069[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5069[0U]))))))
                                             : 0U));
    } else if ((IData)(((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                         >> 0x0000003fU) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__381__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__381__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__381__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__381__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__381__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__382__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__383__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__382__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__383__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__383__A 
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
    if ((IData)(((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                  >> 0x0000003fU) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = vlSelfRef.__PVT__max_expo;
    } else if ((IData)(((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                         >> 0x0000003fU) & (~ (IData)(vlSelfRef.__PVT__in_nan))))) {
        vlSelfRef.__PVT__in_aligned_expo = 0U;
    }
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__383__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__383__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__382__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__382__Vfuncout;
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

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_63__1(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_63__1\n"); );
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
                                                    >> 0x0000003fU))));
    vlSelfRef.__PVT__shift_sel = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_partition_a_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                  && (IData)(((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op_en_fp_d1 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_dlv_en_fp_d1) 
                                              >> 0x0000003fU)));
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_63__2(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_63__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__378__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__378__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__378__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__378__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__379__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__379__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__379__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__379__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__380__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__380__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__380__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__380__A = 0;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__379__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__380__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__379__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__380__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__380__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__380__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__380__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__379__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__379__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__378__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__378__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__378__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__378__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__378__Vfuncout;
}

void Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_63__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_63__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000003fU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_63_d1
                                    : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5070[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5070[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5070[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_63_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5069[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5069[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5069[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}
