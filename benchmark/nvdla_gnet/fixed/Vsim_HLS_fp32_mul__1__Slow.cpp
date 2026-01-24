// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__sel = 0;
    // Body
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__453__Vfuncout;
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__454__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__454__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__454__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__454__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__460__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__462__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__455__Vfuncout;
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__461__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__504__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__505__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__481__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__481__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__481__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__481__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__483__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__482__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__463__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__486__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__Vfuncout)));
}

VL_ATTR_COLD void Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7__1(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel = 0;
    // Body
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__510__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0f00U == (0x0f00U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (0x7fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_28)))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (IData)(((0x0700U == (0x0700U 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32))) 
                              & (0x7eU == (0x7eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_28))))))
                : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                    ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (IData)(((0x0300U == (0x0300U 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31))) 
                                  & (0x7cU == (0x7cU 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_28))))))
                    : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                          & (0x78U == (0x78U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_28))))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__456__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__456__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__456__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__456__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__487__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__487__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__487__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__487__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__488__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__488__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__488__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__488__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__451__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__458__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__458__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__458__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__458__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__459__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__452__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt 
        = ((IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__490__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__465__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__501__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__503__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__449__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__450__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__448__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__507__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__502__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__506__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__470__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__491__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__493__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__508__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__492__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__509__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__500__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__sel = 0;
    // Body
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__517__Vfuncout;
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__518__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__518__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__518__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__518__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__524__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__526__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__519__Vfuncout;
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__525__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__545__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__545__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__545__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__545__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__547__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__546__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__527__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__550__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__Vfuncout)));
}

VL_ATTR_COLD void Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8__1(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__sel = 0;
    // Body
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__575__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__574__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0e00U == (0x0e00U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (0xffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_29)))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (IData)(((0x0600U == (0x0600U 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32))) 
                              & (0xfeU == (0xfeU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_29))))))
                : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                    ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                          & (0xfcU == (0xfcU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_29)))))
                    : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (0xf8U == (0xf8U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_29)))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__520__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__520__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__520__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__520__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__551__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__551__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__551__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__551__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__552__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__552__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__552__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__552__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__522__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__522__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__522__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__522__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__523__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__531__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt 
        = ((IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__533__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__565__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__567__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__513__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__514__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__566__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__534__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__535__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__564__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__sel = 0;
    // Body
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__581__Vfuncout;
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__582__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__582__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__582__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__582__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__588__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__590__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__583__Vfuncout;
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__589__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__617__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__632__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__633__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__609__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__609__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__609__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__609__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__611__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__610__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__591__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__614__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__Vfuncout)));
}

VL_ATTR_COLD void Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9__1(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__sel = 0;
    // Body
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__639__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__638__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (IData)(((0x0c00U == (0x0c00U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld))) 
                          & (0x01ffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30)))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                      & (0x01feU == (0x01feU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30)))))
                : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                    ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                       & (0x01fcU == (0x01fcU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30))))
                    : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__584__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__584__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__584__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__584__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__615__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__615__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__615__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__615__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__616__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__616__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__616__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__616__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__586__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__586__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__586__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__586__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__587__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt 
        = ((IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__618__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__597__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__631__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__577__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__578__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__623__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__594__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__635__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__634__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__624__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__598__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__626__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__619__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__621__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__636__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__625__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__599__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__620__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__622__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__637__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__600__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__sel = 0;
    // Body
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__645__Vfuncout;
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__646__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__646__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__646__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__646__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__652__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__654__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__647__Vfuncout;
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__653__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__681__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__673__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__673__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__673__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__673__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__675__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__674__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__655__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__678__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__Vfuncout)));
}

VL_ATTR_COLD void Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10__1(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__sel = 0;
    // Body
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__703__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__702__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                  & (0x000003ffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31))))
            : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
                   & (0x03feU == (0x03feU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31))))
                : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__648__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__648__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__648__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__648__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__679__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__679__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__679__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__679__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__680__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__680__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__680__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__680__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__643__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__650__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__650__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__650__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__650__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__651__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__659__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__644__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt 
        = ((IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__682__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__660__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__661__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__641__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__642__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__640__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__687__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__658__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__688__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__662__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__690__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__683__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__685__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__689__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__663__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__691__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__686__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__664__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__sel = 0;
    // Body
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__Vfuncout;
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__710__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__710__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__710__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__710__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__Vfuncout;
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__737__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__737__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__737__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__737__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__Vfuncout)));
}

VL_ATTR_COLD void Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11__1(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__sel = 0;
    // Body
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (0x000007ffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__712__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__712__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__712__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__712__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__743__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__743__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__743__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__743__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__744__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__744__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__744__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__744__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__714__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__714__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__714__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__714__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt 
        = ((IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_mul___ctor_var_reset(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->chn_a_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2380236594467781804ull);
    vlSelf->chn_a_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17991353141507009153ull);
    vlSelf->chn_a_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13710593673808292217ull);
    vlSelf->chn_b_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16850365506322810530ull);
    vlSelf->chn_b_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13162467270669676242ull);
    vlSelf->chn_b_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8307224015079505439ull);
    vlSelf->chn_o_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1477624943684843811ull);
    vlSelf->chn_o_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16276632572638137710ull);
    vlSelf->chn_o_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12314530991929382410ull);
    vlSelf->__PVT__chn_b_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4422829178647546904ull);
    vlSelf->__PVT__chn_o_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11134422164122515618ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6436189308775678795ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11534977155659407994ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2511810818792390198ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10954530761624541816ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5722674276915882649ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11475949291524628800ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11413663220659352824ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 812040167644227081ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10417741071495234930ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3516708110639856967ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 710675822652386492ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1999312968426472675ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6831916251624784837ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15681431789556561818ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18404922212852223423ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12026140808475250663ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16988393915907751436ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7962491688362678600ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6049277787598291292ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2348075893801182613ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11846776812317426149ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13025467007699152951ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8371903206102010497ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17675184740522272390ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16662020450020929452ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13895271069457951636ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7487595295524444544ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 2377100627777617022ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14356059407415565124ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13572713422408814281ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 550611057464833344ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8801732958884942162ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13353010259223713494ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4369574606774065574ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13111778853666787657ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 7234213341380217525ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1886949622541641437ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17848251840894569348ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9449584020371891292ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5803691310992660638ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7913471676583403083ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14214243923065302266ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11349975198008120498ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8862826060302266911ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3491567983000624531ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2679349391986184749ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 340166404089761258ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3958067056872963585ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 6032736525272520011ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 12966227847946013457ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15732056096274489225ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5562893584069097860ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14712724060484147600ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1446712717702258669ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 = VL_SCOPED_RAND_RESET_Q(46, __VscopeHash, 16443796791172532055ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12077804488576433446ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13486752726310570710ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2604670934402611737ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16016835219948900838ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18388720530281292320ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6806686196678504926ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18296625106684263477ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13248874462431294699ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14538509363907758852ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16919682568575618036ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6909169956486169647ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7146417711112588656ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16621711848859803677ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15850362672976413207ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3659848940041944985ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8084629087010120198ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3174265721440861566ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11189235392003303100ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8958345488364030456ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7522907428190077920ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13604068996116143540ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11144360151820652196ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3023537050519166800ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2568000097593783630ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17322403023712839534ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12145943404611735101ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3655894329670359774ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4344222535703578789ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1455250896681479485ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14780091572372783513ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1808758867776489611ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9040878265537731316ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2391651164126034767ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1678039558271385971ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9517878991385749795ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13304146321073106204ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16494185141580313531ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1214623815884823099ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4106209239551211246ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13953658456590675497ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2502359197727975716ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12049898627589560450ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8547028068739678889ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7868413129826561956ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15278549799395263455ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17764849847873993709ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18186411650154471486ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15311332804004589025ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3750431623308819575ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1858062865586096362ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9756745089830642997ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 830542528324200141ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17705114416647700989ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14211769997628116246ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7618775420392420435ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11785031661491570513ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7349826483514514497ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1226333047189964928ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5252347199867028149ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13200730856558763517ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8980656868461832763ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4294396603824614081ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2136645107262012994ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14474320943472525525ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1326397356218440500ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4148954244283459403ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18052457907392116062ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10438000754600210926ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6819711023658517050ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_Q(46, __VscopeHash, 12908428226034106022ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 5641372236606906982ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2909386919303085395ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5870685686768999118ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4708619051697001047ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13647523711230086555ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14661280950836620582ull);
    vlSelf->HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5879596314095511244ull);
    vlSelf->HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11573791943313020969ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11550835411270477294ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11336905652636190819ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386335908400379353ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 320375786625044501ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8066746850931625463ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15735817123306870572ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7598233472845832347ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9460243578562041098ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10332794899516345143ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9735462829150722447ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2998814428949194110ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10334321726503445532ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5946868990911546842ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8435793724095998065ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5970696788216668987ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1565932332495963340ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2228889746405986859ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13961350619836354943ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8976935502556216915ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 322206276404563742ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11918315575481930010ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5840779164954857188ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15050522515511983749ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13991889174300250007ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11899235910269348170ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3973842631010337003ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2984829620285707046ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16158858041911781645ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4327315691310052178ull);
    vlSelf->__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2040703020592403016ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__6__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15560227153771079925ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__6__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8195292729923039016ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__8__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1744302769695693708ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__8__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11185951343111408810ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__9__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10311832688199912332ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__9__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16445577570673609999ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__10__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 204667296619382126ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__10__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1971362385488102787ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__33__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7263821665707447244ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__33__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17846753149618333388ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__36__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16301890557969439078ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__36__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5168921782960453900ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__36__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3322753494924826351ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__37__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 664400011500504523ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__37__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5068907744579661244ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__37__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10649517727828626041ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__39__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7297248281586134737ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__39__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3660631241910998480ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__40__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3834159102438453907ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__40__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3937608190083492110ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__70__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9919486801856454481ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__70__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10854072915626356249ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__72__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8183129260690399421ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__72__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2385678438088327077ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__73__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1516290929031156624ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__73__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5095261762314376735ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__74__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8139066432720627599ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__74__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5646386847873015818ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__97__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11346320760452637844ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__97__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6674196771414110046ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__100__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2877935604034123764ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__100__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7600142507746178156ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__100__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18396791407137423996ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__101__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15798410543714947226ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__101__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8331885662646600033ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__101__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7093691625071112952ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__103__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7121201891577979869ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__103__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11798768610079130412ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__104__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5061213189593822918ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__104__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2218846387080184825ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__134__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8133198057233813274ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__134__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1163390820150454847ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__136__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13586281495446718233ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__136__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13996926511344842813ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__137__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9489364034034166858ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__137__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7677662563063421364ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__138__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11729967639672531336ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__138__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8697227788926108245ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__161__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7559748886670398458ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__161__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16905262326519319429ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__164__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10488040148486763156ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__164__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4199913020232546377ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__164__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12240398707320073215ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__165__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4754580340077650822ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__165__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13224703157207695335ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__165__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17029773996416536855ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__167__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16223061227199159522ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__167__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8032928831866468301ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__168__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11206681345500822200ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__168__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6255509896068771192ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__198__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7804411575404715681ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__198__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17065350578516756808ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__200__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13278069969583475136ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__200__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15278593742218974536ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__201__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4352017243690044087ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__201__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1249546022418197636ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__202__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 281620283051801771ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__202__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4564630088651814835ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__225__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6461297748582167227ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__225__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7128082570004104546ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__228__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11083115079076112958ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__228__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7437778620842923601ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__228__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4146127319707862375ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__229__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 481545861756901426ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__229__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13205559166003206424ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__229__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7152208999341105514ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__231__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2746321429982584011ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__231__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8654270504048346280ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__232__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7560035837180927497ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__232__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10627368236544451781ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__262__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12953221039431976763ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__262__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2598872447039850632ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__264__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13282026274485950343ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__264__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7667592094869675809ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__265__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3324545433211996081ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__265__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13967984949203726299ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__266__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2647095448513163021ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__266__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4975639907862797992ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__289__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13645780985495563720ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__289__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8671259124664570625ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__292__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13574728430249212452ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__292__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1170432185412309970ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__292__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3913132594056170646ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__293__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17239588535338809562ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__293__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18397446875720840031ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__293__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 592768946993604963ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__295__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1194142737371751562ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__295__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 450846846468529410ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__296__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16268429173030172742ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__296__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3454992277524322669ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__326__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7622895743592925254ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__326__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15117074100742230704ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__328__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13637858838103947292ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__328__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13661771930672047627ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__329__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16135684678707638759ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__329__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11027763388722044094ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__330__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5532460586781376421ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__330__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2257790942859122752ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__353__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1366578665915660767ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__353__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2566876052197330024ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__356__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2478609537662374211ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__356__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 590309905077089433ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__356__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11813022157920652094ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__357__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1247056587897760309ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__357__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13775253843309824091ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__357__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16606461590116525173ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__359__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14057226686057737706ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__359__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5089816013053500158ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__360__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1176307840610167660ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__360__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7774540681057909178ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__390__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10403138712244489544ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__390__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13571639203186112256ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__392__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 516177989715672420ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__392__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2472333710989306404ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__393__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11998604917480607063ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__393__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16172623030826631567ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__394__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8916776476365349477ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__394__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1721586842703579346ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__417__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 893225246389137722ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__417__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15588876826566526201ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__420__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14063199552469013783ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__420__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12385717166706363599ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__420__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15802807168629704139ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__421__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14739147775828116662ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__421__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17564189279972972609ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__421__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18224362513097154569ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__423__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10285751769086665978ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__423__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5190533084393395072ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__424__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7777979035293233741ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__424__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 762852595799939814ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__454__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3321081138832075962ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__454__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11751693914232136103ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__456__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7637313777287305105ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__456__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4298763877940287833ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10558002371800173958ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__457__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9090679475935694458ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__458__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1059452551762180032ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__458__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9084322324859812606ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__481__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10992482851545869048ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__481__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6879051422490530050ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8924742299574326392ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13022079709308575835ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__484__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11653029477899749947ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6808238968653552371ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 783091535304542832ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__485__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1513632729434527903ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__487__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15410831170569081368ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__487__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11146902242036868043ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__488__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2378712552472743166ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__488__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5056253140954358127ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__518__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1692850082423707769ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__518__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16253424209363638942ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__520__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10007462321915060615ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__520__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17032597272462796170ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8609128072751811536ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__521__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3570722963193035564ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__522__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3819667413070828056ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__522__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11036761135516419555ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__545__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17541072157537200900ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__545__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8495283099694499484ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4263755240985071162ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7993737352607027691ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__548__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12165277172045295283ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15654647613151965212ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14237682027112984095ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__549__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11270668685573878763ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__551__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7750838685320944142ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__551__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14085764025984614499ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__552__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6308565752085019024ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__552__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 723831018117222751ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__582__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9770157832954391904ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__582__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17589391193902071976ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__584__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5182042305069074488ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__584__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14909171945643962606ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2350738256511386780ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__585__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9998869655733981377ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__586__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16449216216948564241ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__586__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5172657607381998378ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__609__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2902630895493755484ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__609__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14603876702557266603ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12305687984048587703ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7373241390945209886ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__612__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13515204946435535776ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11462301752855305106ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1366259376620974117ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__613__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7922546279540232350ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__615__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6496504897657271340ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__615__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15515977128308235486ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__616__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2131118356349573418ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__616__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3393217152552083709ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__646__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6871013736090610318ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__646__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4376537464504452283ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__648__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14236818063314579143ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__648__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14741612974696049863ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17148728785805811332ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__649__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11684795592516045120ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__650__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7604336835818895157ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__650__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3721703528605116450ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__673__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14109286159728208872ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__673__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9031386668689397055ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7575813021962162779ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6948051757160430289ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__676__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12805143714467737613ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17852247306455460648ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17999377761705459255ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__677__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10225741629337930191ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__679__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11925277381693130278ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__679__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12219650576762467286ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__680__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11616407114458888287ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__680__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4944223239924188602ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__710__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13897358669400256355ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__710__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4645120253717473520ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__712__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9518954242995182513ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__712__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13629095141920286469ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16935603797517291490ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1359323061668327743ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__714__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6829908667018417630ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__714__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6136630874334940580ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__737__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11802357100287490344ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__737__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3004546754747223038ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2771990547615569749ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4088117135502758148ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6470727526600273248ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15488681839760406935ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__input_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5795708261780721741ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8888124282480195813ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__743__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13875071757479546917ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__743__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7972373093174058120ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__744__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16135590485024051878ull);
    vlSelf->__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__744__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6987370746871541450ull);
}
