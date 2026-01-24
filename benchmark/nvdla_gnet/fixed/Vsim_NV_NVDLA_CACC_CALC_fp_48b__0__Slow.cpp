// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_slcg_cell_2__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_0_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_0_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_1__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 1U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_1_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_1_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_2__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 2U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_2_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_2_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_3__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 3U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_3_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_3_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_4__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 4U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_4_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_4_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_5__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 5U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_5_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_5_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_6__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 6U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_6_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_6_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_7__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 7U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_7_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_7_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_8__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 8U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_8_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_8_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_9__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 9U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_9_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_9_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_10__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000000aU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_10_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_10_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_11__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000000bU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_11_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_11_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_12__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_12__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
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
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
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
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000000cU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_12_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4968[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4968[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4968[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_12_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4967[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4967[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4967[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_13__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_13__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__78__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__78__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__78__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__78__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__79__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__79__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__79__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__79__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__80__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__80__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__80__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__80__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__81__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__81__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__81__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__81__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__82__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__82__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__82__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__82__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__83__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__83__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__83__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__83__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__79__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__80__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__79__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__80__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__80__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__80__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__80__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__79__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__79__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__78__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__78__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__78__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__78__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__78__Vfuncout;
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000000dU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_13_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__81__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__81__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__81__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__81__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__81__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__82__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__83__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__82__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__83__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__83__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__83__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__83__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__82__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__82__Vfuncout;
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4970[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4970[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4970[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_13_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4969[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4969[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4969[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_14__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_14__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__84__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__84__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__84__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__84__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__85__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__85__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__85__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__85__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__86__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__86__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__86__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__86__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__87__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__87__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__87__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__87__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__88__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__88__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__88__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__88__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__89__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__89__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__89__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__89__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__85__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__86__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__85__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__86__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__86__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__86__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__86__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__85__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__85__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__84__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__84__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__84__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__84__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__84__Vfuncout;
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000000eU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_14_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__87__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__87__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__87__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__87__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__87__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__88__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__89__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__88__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__89__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__89__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__89__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__89__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__88__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__88__Vfuncout;
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4972[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4972[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4972[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_14_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4971[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4971[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4971[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_15__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_15__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__90__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__90__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__90__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__90__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__91__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__91__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__91__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__91__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__92__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__92__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__92__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__92__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__93__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__93__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__93__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__93__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__94__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__94__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__94__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__94__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__95__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__95__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__95__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__95__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__91__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__92__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__91__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__92__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__92__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__92__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__92__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__91__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__91__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__90__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__90__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__90__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__90__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__90__Vfuncout;
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x0000000fU)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_15_d1
                                    : 0ULL);
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
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
    vlSelfRef.__PVT__in_nan = ((0x0000003fU == (0x0000003fU 
                                                & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
                                                           >> 0x00000026U)))) 
                               | (0x000000ffU == (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_mask_op 
                                                             >> 0x00000028U)))));
    vlSelfRef.__PVT__partial_result = (((IData)(vlSelfRef.__PVT__final_sel) 
                                        & (IData)(vlSelfRef.__PVT__final_vld))
                                        ? vlSelfRef.out_partial_data
                                        : 0ULL);
    vlSelfRef.__PVT__partial_mant_nmlz_tmp = (0x000001ffffffffffULL 
                                              & ((IData)(vlSelfRef.__PVT__mant_sum_carry_neg)
                                                  ? 
                                                 VL_SHIFTL_QQI(41,41,32, vlSelfRef.__PVT__mant_sum_round, 1U)
                                                  : 
                                                 (vlSelfRef.__PVT__mant_sum_round 
                                                  >> (IData)(vlSelfRef.__PVT__mant_sum_carry_pos))));
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__93__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__93__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__93__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__93__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__93__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__94__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__95__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__94__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__95__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__95__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__95__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__95__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__94__Vfuncout = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__94__Vfuncout;
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
                                                          >> 0x00000026U)))) 
                                           - (IData)(vlSelfRef.__PVT__di_lead_num)))
                                     : 0U);
    }
    vlSelfRef.__PVT__partial_mant_abs = (0x0000007fffffffffULL 
                                         & ((1U & (IData)(
                                                          (vlSelfRef.__PVT__partial_result 
                                                           >> 0x00000027U)))
                                             ? (1ULL 
                                                + (~ vlSelfRef.__PVT__partial_result))
                                             : vlSelfRef.__PVT__partial_result));
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
    vlSelfRef.__VdfgRegularize_h3f0e3986_0_2 = ((IData)(vlSelfRef.__PVT__di_expo) 
                                                > (IData)(vlSelfRef.__PVT__oi_expo));
    vlSelfRef.__PVT__fp32_mant_carry = (IData)((0x0000007fffffc000ULL 
                                                == 
                                                (0x0000007fffffc000ULL 
                                                 & vlSelfRef.__PVT__partial_mant_abs)));
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4974[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4974[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4974[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_15_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4973[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4973[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4973[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_16__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_16__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__96__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__96__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__96__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__96__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__97__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__97__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__97__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__97__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__98__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__98__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__98__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__98__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__99__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__99__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__99__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__99__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__100__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__100__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__100__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__100__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__101__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__101__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__101__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__101__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_slcg_cell_3__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__97__A = (0x0000000fffffffffULL 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__98__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__97__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__98__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__98__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__98__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__98__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__97__Vfuncout = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__97__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__96__A = (0x0000000fffffffffULL 
                                                  & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__96__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__96__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__96__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__96__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000010U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_16_d1
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
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__99__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__99__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__99__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__99__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__99__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__100__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__101__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__100__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__101__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__101__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__101__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__101__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__100__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__100__Vfuncout;
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4976[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4976[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4976[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_16_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4975[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4975[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4975[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_17__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__102__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__102__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__102__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__102__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__103__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__103__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__103__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__103__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__104__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__104__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__104__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__104__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__105__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__105__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__105__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__105__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__106__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__106__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__106__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__106__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__107__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__107__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__107__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__107__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__103__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__104__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__103__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__104__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__104__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__104__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__104__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__103__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__103__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__102__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__102__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__102__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__102__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__102__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000011U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_17_d1
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
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__105__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__105__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__105__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__105__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__105__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__106__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__107__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__106__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__107__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__107__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__107__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__107__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__106__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__106__Vfuncout;
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4978[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4978[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4978[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_17_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4977[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4977[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4977[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_18__0(Vsim_NV_NVDLA_CACC_CALC_fp_48b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CACC_CALC_fp_48b___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__u_cell_fp_18__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0;
    u0_dw_lsd__DOT____Vlvbound_h7fe910e6__0 = 0;
    CData/*0:0*/ u1_dw_lsd__DOT____Vlvbound_h90638ce9__0;
    u1_dw_lsd__DOT____Vlvbound_h90638ce9__0 = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__108__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__108__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__108__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__108__A = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__109__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__109__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd__109__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__109__A = 0;
    CData/*5:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__110__Vfuncout;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__110__Vfuncout = 0;
    QData/*35:0*/ __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__110__A;
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__110__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__111__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__111__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__111__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__111__A = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__112__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__112__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd__112__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__112__A = 0;
    CData/*5:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__113__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__113__Vfuncout = 0;
    QData/*43:0*/ __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__113__A;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__113__A = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__109__A = (0x0000000fffffffffULL 
                                               & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1);
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__110__A = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__109__A;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__110__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__110__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__110__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__110__Vfuncout;
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd__109__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__dec = __Vfunc_u0_dw_lsd__DOT__DWF_lsd__109__Vfuncout;
    vlSelfRef.__PVT__mant_sum_point5 = (IData)(((vlSelfRef.__PVT__mant_sum_trans 
                                                 >> 1U) 
                                                & (0x0000020000000000ULL 
                                                   != 
                                                   (0x0000020000000001ULL 
                                                    & vlSelfRef.__PVT__mant_sum_trans))));
    vlSelfRef.__PVT__mant_sum = (0x000001ffffffffffULL 
                                 & (VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__di_aligned_mant) 
                                    + VL_EXTENDS_QQ(41,40, vlSelfRef.__PVT__oi_aligned_mant)));
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__108__A = (0x0000000fffffffffULL 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1);
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x23U;
    vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x22U;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x23U >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__108__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x23U >= (IData)(vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__108__A 
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
    __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__108__Vfuncout 
        = vlSelfRef.__PVT__u0_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__di_lead_num = __Vfunc_u0_dw_lsd__DOT__DWF_lsd_enc__108__Vfuncout;
    vlSelfRef.out_partial_data = (((QData)((IData)(vlSelfRef.__PVT__partial_result_expo)) 
                                   << 0x00000028U) 
                                  | vlSelfRef.__PVT__partial_result_mant);
    vlSelfRef.__PVT__in_mask_op = ((1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_vld_fp_d1 
                                                  >> 0x00000012U)))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op1_fp_18_d1
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
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__111__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__111__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__111__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__111__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__msum_lead_num = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__111__Vfuncout;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__112__A = vlSelfRef.__PVT__u1_dw_lsd__DOT__a;
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__113__A = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__112__A;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done = 0U;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc = 0x2bU;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i = 0x2aU;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__done)))) {
        if ((((0x2bU >= (0x0000003fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)))) 
              && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__113__A 
                                >> (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i))))))) 
             != ((0x2bU >= (IData)(vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__i)) 
                 && (1U & (IData)((__Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__113__A 
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__113__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd_enc__Vstatic__temp_enc;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_enc 
        = __Vfunc_u1_dw_lsd__DOT__DWF_lsd_enc__113__Vfuncout;
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
    __Vfunc_u1_dw_lsd__DOT__DWF_lsd__112__Vfuncout 
        = vlSelfRef.__PVT__u1_dw_lsd__DOT__DWF_lsd__Vstatic__temp_dec;
    vlSelfRef.__PVT__u1_dw_lsd__DOT__dec = __Vfunc_u1_dw_lsd__DOT__DWF_lsd__112__Vfuncout;
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
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1))
                                     ? (0x0000007fU 
                                        & (((IData)(0x2fU) 
                                            + (0x0000003fU 
                                               & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
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
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
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
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
                                                                    >> 0x00000026U))))
                                                        ? 0ULL
                                                        : vlSelfRef.__PVT__in_mask_op))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_3, __Vtemp_2, (IData)(vlSelfRef.__PVT__oi_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4980[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4980[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4980[2U] 
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
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
                                                            >> 0x00000026U))))
                                             ? ((QData)((IData)(
                                                                (0x000007ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
                                                                            >> 0x0000001bU))))) 
                                                << 0x00000019U)
                                             : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
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
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
                                                             >> 0x00000026U))))
                                              ? ((QData)((IData)(
                                                                 (0x000007ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
                                                                             >> 0x0000001bU))))) 
                                                 << 0x00000019U)
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
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
                                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
                                                                    >> 0x00000026U))))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (0x000007ffU 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
                                                                                >> 0x0000001bU))))) 
                                                        << 0x00000019U)
                                                        : 
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_calculator__DOT__calc_op0_fp_18_d1 
                                                        << (IData)(vlSelfRef.__PVT__di_lead_num))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000cU));
    VL_SHIFTRS_WWI(80,80,8, __Vtemp_6, __Vtemp_5, (IData)(vlSelfRef.__PVT__di_expo_shift));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4979[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4979[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4979[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
}
