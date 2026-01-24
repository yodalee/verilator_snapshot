// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_38__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_38__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__228__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__228__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__228__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__228__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__229__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__229__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__229__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__229__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__230__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__230__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__230__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__230__A = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__229__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__230__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__229__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__230__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__230__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__230__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__230__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__229__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__229__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__228__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__228__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__228__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__228__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__228__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000026U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_38_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5020[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5020[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5020[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_38_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5019[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5019[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5019[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_39__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_39__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__234__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__234__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__234__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__234__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__235__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__235__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__235__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__235__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__236__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__236__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__236__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__236__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__237__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__237__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__237__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__237__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__238__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__238__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__238__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__238__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__239__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__239__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__239__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__239__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__235__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__236__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__235__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__236__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__236__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__236__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__236__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__235__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__235__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__234__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__234__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__234__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__234__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__234__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000027U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_39_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__237__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__237__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__237__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__237__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__237__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__238__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__239__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__238__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__239__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__239__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__239__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__239__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__238__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__238__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5022[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5022[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5022[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_39_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5021[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5021[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5021[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_40__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_40__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__240__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__240__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__240__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__240__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__241__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__241__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__241__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__241__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__242__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__242__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__242__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__242__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__243__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__243__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__243__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__243__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__244__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__244__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__244__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__244__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__245__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__245__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__245__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__245__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__241__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__242__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__241__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__242__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__242__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__242__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__242__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__241__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__241__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__240__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__240__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__240__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__240__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__240__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000028U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_40_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__243__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__243__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__243__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__243__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__243__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__244__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__245__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__244__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__245__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__245__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__245__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__245__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__244__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__244__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5024[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5024[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5024[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_40_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5023[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5023[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5023[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_41__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_41__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__246__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__246__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__246__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__246__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__247__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__247__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__247__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__247__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__248__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__248__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__248__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__248__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__249__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__249__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__249__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__249__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__250__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__250__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__250__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__250__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__251__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__251__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__251__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__251__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__247__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__248__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__247__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__248__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__248__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__248__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__248__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__247__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__247__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__246__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__246__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__246__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__246__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__246__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000029U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_41_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__249__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__249__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__249__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__249__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__249__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__250__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__251__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__250__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__251__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__251__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__251__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__251__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__250__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__250__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5026[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5026[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5026[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_41_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5025[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5025[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5025[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_42__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_42__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__252__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__252__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__252__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__252__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__253__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__253__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__253__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__253__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__254__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__254__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__254__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__254__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__255__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__255__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__255__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__255__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__256__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__256__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__256__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__256__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__257__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__257__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__257__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__257__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__253__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__254__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__253__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__254__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__254__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__254__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__254__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__253__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__253__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__252__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__252__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__252__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__252__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__252__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000002aU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_42_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__255__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__255__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__255__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__255__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__255__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__256__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__257__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__256__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__257__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__257__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__257__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__257__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__256__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__256__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5028[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5028[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5028[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_42_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5027[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5027[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5027[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_43__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_43__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__258__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__258__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__258__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__258__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__259__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__259__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__259__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__259__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__260__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__260__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__260__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__260__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__261__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__261__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__261__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__261__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__262__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__262__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__262__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__262__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__263__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__263__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__263__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__263__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__259__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__260__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__259__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__260__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__260__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__260__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__260__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__259__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__259__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__258__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__258__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__258__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__258__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__258__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000002bU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_43_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__261__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__261__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__261__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__261__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__261__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__262__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__263__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__262__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__263__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__263__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__263__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__263__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__262__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__262__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5030[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5030[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5030[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_43_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5029[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5029[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5029[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_44__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_44__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__264__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__264__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__264__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__264__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__265__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__265__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__265__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__265__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__266__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__266__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__266__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__266__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__267__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__267__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__267__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__267__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__268__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__268__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__268__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__268__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__269__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__269__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__269__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__269__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__265__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__266__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__265__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__266__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__266__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__266__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__266__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__265__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__265__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__264__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__264__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__264__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__264__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__264__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000002cU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_44_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__267__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__267__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__267__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__267__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__267__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__268__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__269__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__268__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__269__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__269__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__269__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__269__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__268__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__268__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5032[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5032[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5032[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_44_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5031[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5031[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5031[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_45__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_45__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__270__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__270__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__270__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__270__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__271__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__271__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__271__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__271__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__272__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__272__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__272__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__272__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__273__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__273__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__273__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__273__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__274__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__274__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__274__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__274__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__275__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__275__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__275__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__275__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__271__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__272__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__271__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__272__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__272__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__272__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__272__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__271__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__271__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__270__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__270__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__270__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__270__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__270__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000002dU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_45_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__273__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__273__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__273__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__273__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__273__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__274__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__275__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__274__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__275__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__275__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__275__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__275__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__274__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__274__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5034[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5034[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5034[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_45_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5033[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5033[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5033[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_46__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_46__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__276__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__276__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__276__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__276__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__277__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__277__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__277__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__277__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__278__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__278__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__278__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__278__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__279__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__279__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__279__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__279__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__280__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__280__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__280__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__280__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__281__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__281__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__281__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__281__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__277__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__278__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__277__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__278__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__278__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__278__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__278__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__277__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__277__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__276__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__276__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__276__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__276__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__276__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000002eU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_46_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__279__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__279__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__279__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__279__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__279__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__280__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__281__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__280__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__281__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__281__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__281__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__281__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__280__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__280__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5036[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5036[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5036[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_46_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5035[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5035[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5035[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_47__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_47__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__282__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__282__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__282__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__282__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__283__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__283__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__283__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__283__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__284__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__284__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__284__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__284__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__285__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__285__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__285__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__285__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__286__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__286__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__286__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__286__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__287__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__287__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__287__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__287__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__283__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__284__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__283__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__284__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__284__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__284__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__284__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__283__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__283__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__282__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__282__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__282__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__282__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__282__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000002fU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_47_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__285__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__285__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__285__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__285__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__285__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__286__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__287__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__286__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__287__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__287__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__287__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__287__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__286__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__286__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5038[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5038[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5038[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_47_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5037[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5037[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5037[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_48__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_48__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__288__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__288__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__288__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__288__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__289__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__289__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__289__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__289__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__290__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__290__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__290__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__290__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__291__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__291__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__291__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__291__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__292__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__292__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__292__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__292__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__293__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__293__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__293__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__293__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__289__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__290__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__289__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__290__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__290__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__290__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__290__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__289__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__289__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__288__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__288__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__288__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__288__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__288__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000030U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_48_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__291__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__291__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__291__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__291__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__291__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__292__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__293__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__292__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__293__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__293__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__293__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__293__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__292__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__292__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5040[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5040[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5040[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_48_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5039[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5039[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5039[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_49__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_49__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__294__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__294__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__294__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__294__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__295__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__295__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__295__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__295__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__296__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__296__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__296__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__296__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__297__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__297__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__297__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__297__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__298__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__298__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__298__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__298__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__299__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__299__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__299__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__299__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__295__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__296__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__295__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__296__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__296__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__296__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__296__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__295__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__295__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__294__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__294__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__294__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__294__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__294__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000031U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_49_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__297__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__297__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__297__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__297__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__297__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__298__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__299__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__298__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__299__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__299__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__299__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__299__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__298__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__298__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5042[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5042[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5042[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_49_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5041[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5041[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5041[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_50__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_50__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__300__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__300__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__300__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__300__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__301__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__301__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__301__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__301__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__302__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__302__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__302__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__302__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__303__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__303__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__303__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__303__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__304__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__304__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__304__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__304__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__305__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__305__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__305__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__305__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__301__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__302__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__301__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__302__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__302__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__302__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__302__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__301__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__301__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__300__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__300__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__300__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__300__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__300__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000032U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_50_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__303__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__303__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__303__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__303__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__303__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__304__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__305__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__304__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__305__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__305__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__305__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__305__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__304__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__304__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5044[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5044[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5044[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_50_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5043[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5043[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5043[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_51__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_51__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__309__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__309__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__309__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__309__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__310__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__310__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__310__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__310__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__311__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__311__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__311__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__311__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000033U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_51_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_51_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__309__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__309__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__309__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__309__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__309__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__310__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__311__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__310__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__311__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__311__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__311__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__311__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__310__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__310__Vfuncout;
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_52__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_52__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000034U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_52_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_52_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_53__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_53__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000035U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_53_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_53_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_54__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_54__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000036U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_54_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_54_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_55__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_55__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000037U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_55_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_55_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_56__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_56__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000038U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_56_d1
                                    : 0ULL);
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
    vlSelfRef.__PVT__u1_dw_lsd__DOT__a = ((vlSelfRef.__PVT__mant_sum 
                                           << 3U) | (QData)((IData)(vlSelfRef.__PVT__in_mant_cut)));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_56_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
