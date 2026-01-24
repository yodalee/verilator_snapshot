// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_0__0(Vsim_HLS_fp17_to_fp16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__6__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__6__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__6__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__6__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__8__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__8__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__8__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__8__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__10__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__10__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__10__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__10__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__arg1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__arg1 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__arg1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__sbit;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__34__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__34__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__34__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__34__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__35__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__35__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__35__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__35__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__sel = 0;
    // Body
    vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_nor_itm_2));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_2)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s 
        = (0x0000003fU & ((IData)(0x1fU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__0__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   >> 0x0aU))));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__0__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__0__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__0__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                               >> 0x0000000aU))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__sel)
            ? __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__input_1
            : __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__input_0);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__36__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_iswt0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__sbit = 0U;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__arg1 = 1U;
    if ((0x00000010U & (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__sbit) 
                << 1U) | (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__sbit 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__arg2 
            = (0x0000001fU & (~ (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__arg1 
            = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                     >> 1U));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__sbit))));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x07feU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x000007ffU & VL_SHIFTRS_III(11,11,5, (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__sbit 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__arg2 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__arg1 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__sbit) 
                << 1U) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__sbit))));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x07fcU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                              << (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__arg2 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__arg1 
        = (0x00000400U | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x0800U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t)) 
           | (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__arg1));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00000fffU & VL_SHIFTRS_III(12,12,4, (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__arg2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__Vfuncout 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__29__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__34__arg2 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__35__arg2 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__34__arg2;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x07fcU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__35__arg2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__35__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__34__Vfuncout 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__35__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__34__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__6__vector 
        = (0x0000007fU & ((IData)(0x11U) + (0x00000040U 
                                            | (0x0000003fU 
                                               & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0000000aU))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__6__vector), 6U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__6__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__6__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl 
        = (0x0000007fU & ((IData)(0x3dU) + VL_EXTEND_II(7,6, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__7__vector 
                            = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0bU));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__7__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__7__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__7__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__9__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__9__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__9__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__9__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__11__vector 
                            = (1U & (((0U != (0x000003ffU 
                                              & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva)))) 
                                      | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva) 
                                         >> 0x0000000aU)) 
                                     & ((0U != (0x000003ffU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   & ((IData)(0x03ffU) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva))))) 
                                        | ((1U & (((IData)(0x07ffU) 
                                                   + (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva)) 
                                                  >> 0x0000000aU)) 
                                           | ((0U != 
                                               (0x000003ffU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva)))) 
                                              | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva) 
                                                 >> 0x0000000aU))))));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__11__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__11__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__11__Vfuncout)))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__8__vector 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__8__vector), 5U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__8__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__8__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__10__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__10__vector), 6U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__10__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__10__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__input_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__21__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_2)));
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl;
                    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__Vfuncout))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__22__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__sel 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
                    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__input_1)
            : 0x0eU);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__23__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_0__1(Vsim_HLS_fp17_to_fp16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__5__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__5__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__5__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__5__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_dp2wdma_prdy) 
           & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp17T16_out_vld))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_14 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_37_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_35_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_2)) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2) 
                 & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__5__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                >> 0x0aU))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__5__vector), 4U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__5__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__input_0 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__5__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__input_0) 
           & (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__sel));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__shift_0_prb 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__4__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_11) 
           & (IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__input_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__input_0 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__28__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__Fp17ToFp16_and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_tmp)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__26__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__27__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_1__0(Vsim_HLS_fp17_to_fp16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__43__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__43__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__43__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__43__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__45__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__45__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__45__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__45__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__47__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__47__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__47__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__47__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__arg1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__arg1 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__arg1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__sbit;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__71__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__71__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__71__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__71__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__72__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__72__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__72__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__72__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__sel = 0;
    // Body
    vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_nor_itm_2));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_2)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s 
        = (0x0000003fU & ((IData)(0x1fU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__37__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   >> 0x0aU))));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__37__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__37__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__37__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                               >> 0x0000000aU))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__sel)
            ? __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__input_1
            : __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__input_0);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__73__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_iswt0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__sbit = 0U;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__arg1 = 1U;
    if ((0x00000010U & (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__sbit) 
                << 1U) | (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__sbit 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__arg2 
            = (0x0000001fU & (~ (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__arg1 
            = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                     >> 1U));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__sbit))));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x07feU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x000007ffU & VL_SHIFTRS_III(11,11,5, (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__sbit 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__arg2 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__arg1 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__sbit) 
                << 1U) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__sbit))));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x07fcU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                              << (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__arg2 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__arg1 
        = (0x00000400U | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x0800U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t)) 
           | (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__arg1));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00000fffU & VL_SHIFTRS_III(12,12,4, (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__arg2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__Vfuncout 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__66__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__71__arg2 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__72__arg2 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__71__arg2;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x07fcU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__72__arg2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__72__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__71__Vfuncout 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__72__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__71__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__43__vector 
        = (0x0000007fU & ((IData)(0x11U) + (0x00000040U 
                                            | (0x0000003fU 
                                               & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0000000aU))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__43__vector), 6U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__43__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__43__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl 
        = (0x0000007fU & ((IData)(0x3dU) + VL_EXTEND_II(7,6, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__44__vector 
                            = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0bU));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__44__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__44__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__44__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__46__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__46__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__46__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__46__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__48__vector 
                            = (1U & (((0U != (0x000003ffU 
                                              & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva)))) 
                                      | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva) 
                                         >> 0x0000000aU)) 
                                     & ((0U != (0x000003ffU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   & ((IData)(0x03ffU) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva))))) 
                                        | ((1U & (((IData)(0x07ffU) 
                                                   + (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva)) 
                                                  >> 0x0000000aU)) 
                                           | ((0U != 
                                               (0x000003ffU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva)))) 
                                              | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva) 
                                                 >> 0x0000000aU))))));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__48__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__48__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__48__Vfuncout)))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__45__vector 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__45__vector), 5U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__45__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__45__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__47__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__47__vector), 6U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__47__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__47__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__55__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__input_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__58__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_2)));
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl;
                    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__Vfuncout))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__59__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__sel 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
                    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__Vfuncout))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__input_1)
            : 0x0eU);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__60__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_1__1(Vsim_HLS_fp17_to_fp16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__39__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__39__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__39__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__39__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__40__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__40__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__40__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__40__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__42__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__42__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__42__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__42__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_dp2wdma_prdy) 
           & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp17T16_out_vld))) 
                      & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_0.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_14 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_37_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_35_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_2)) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2) 
                 & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__42__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                >> 0x0aU))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__42__vector), 4U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__42__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__input_0 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__42__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__input_0) 
           & (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__sel));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__shift_0_prb 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__41__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_11) 
           & (IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__39__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__39__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__39__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__input_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__39__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__40__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__40__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__40__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__input_0 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__40__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__65__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__Fp17ToFp16_and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_tmp)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__63__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__64__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__62__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_2__0(Vsim_HLS_fp17_to_fp16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__80__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__80__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__80__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__80__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__82__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__82__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__82__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__82__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__84__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__84__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__84__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__84__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__arg1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__arg1 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__arg1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__sbit;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__108__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__108__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__108__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__108__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__109__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__109__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__109__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__109__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__sel = 0;
    // Body
    vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_nor_itm_2));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_2)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s 
        = (0x0000003fU & ((IData)(0x1fU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__74__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   >> 0x0aU))));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__74__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__74__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__74__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                               >> 0x0000000aU))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__sel)
            ? __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__input_1
            : __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__input_0);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__110__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_iswt0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__sbit = 0U;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__arg1 = 1U;
    if ((0x00000010U & (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__sbit) 
                << 1U) | (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__sbit 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__arg2 
            = (0x0000001fU & (~ (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__arg1 
            = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                     >> 1U));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__sbit))));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x07feU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x000007ffU & VL_SHIFTRS_III(11,11,5, (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__sbit 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__arg2 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__arg1 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__sbit) 
                << 1U) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__sbit))));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x07fcU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                              << (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__arg2 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__arg1 
        = (0x00000400U | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x0800U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t)) 
           | (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__arg1));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00000fffU & VL_SHIFTRS_III(12,12,4, (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__arg2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__Vfuncout 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__103__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__108__arg2 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__109__arg2 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__108__arg2;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x07fcU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__109__arg2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__109__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__108__Vfuncout 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__109__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__108__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__80__vector 
        = (0x0000007fU & ((IData)(0x11U) + (0x00000040U 
                                            | (0x0000003fU 
                                               & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0000000aU))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__80__vector), 6U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__80__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__80__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl 
        = (0x0000007fU & ((IData)(0x3dU) + VL_EXTEND_II(7,6, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__81__vector 
                            = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0bU));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__81__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__81__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__81__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__83__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__83__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__83__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__83__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__85__vector 
                            = (1U & (((0U != (0x000003ffU 
                                              & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva)))) 
                                      | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva) 
                                         >> 0x0000000aU)) 
                                     & ((0U != (0x000003ffU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   & ((IData)(0x03ffU) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva))))) 
                                        | ((1U & (((IData)(0x07ffU) 
                                                   + (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva)) 
                                                  >> 0x0000000aU)) 
                                           | ((0U != 
                                               (0x000003ffU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva)))) 
                                              | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva) 
                                                 >> 0x0000000aU))))));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__85__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__85__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__85__Vfuncout)))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__82__vector 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__82__vector), 5U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__82__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__82__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__84__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__84__vector), 6U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__84__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__84__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__input_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__95__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_2)));
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl;
                    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__Vfuncout))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__96__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__sel 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
                    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__Vfuncout))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__input_1)
            : 0x0eU);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__97__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_2__1(Vsim_HLS_fp17_to_fp16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__76__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__76__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__76__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__76__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__77__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__77__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__77__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__77__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__79__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__79__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__79__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__79__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_dp2wdma_prdy) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_3.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
              & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_99))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_14 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_37_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_35_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_2)) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2) 
                 & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__79__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                >> 0x0aU))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__79__vector), 4U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__79__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__input_0 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__79__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__input_0) 
           & (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__sel));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__shift_0_prb 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__78__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_11) 
           & (IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__76__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__76__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__76__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__input_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__76__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__77__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__77__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__77__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__input_0 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__77__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__75__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__Fp17ToFp16_and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_tmp)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__98__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__101__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__99__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_3__0(Vsim_HLS_fp17_to_fp16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__117__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__117__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__117__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__117__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__119__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__119__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__119__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__119__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__121__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__121__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__121__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__121__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__arg1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__arg1 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__arg1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__sbit;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__145__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__145__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__145__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__145__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__146__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__146__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__146__arg2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__146__arg2 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__sel = 0;
    // Body
    vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_nor_itm_2));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_2)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s 
        = (0x0000003fU & ((IData)(0x1fU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__111__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   >> 0x0aU))));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__111__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__111__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__111__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                               >> 0x0000000aU))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__sel)
            ? __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__input_1
            : __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__input_0);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__147__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_iswt0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__sbit = 0U;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__arg1 = 1U;
    if ((0x00000010U & (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__sbit) 
                << 1U) | (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__sbit 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__arg2 
            = (0x0000001fU & (~ (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__arg1 
            = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                     >> 1U));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__sbit))));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x07feU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x000007ffU & VL_SHIFTRS_III(11,11,5, (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__sbit 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__arg2 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__arg1 
            = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__sbit) 
                << 1U) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__sbit))));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x07fcU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__arg1));
        vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                              << (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__arg2 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__arg1 
        = (0x00000400U | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x0800U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t)) 
           | (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__arg1));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00000fffU & VL_SHIFTRS_III(12,12,4, (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__arg2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__Vfuncout 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__140__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__145__arg2 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__146__arg2 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__145__arg2;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x07fcU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__146__arg2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__146__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__145__Vfuncout 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__146__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__145__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__117__vector 
        = (0x0000007fU & ((IData)(0x11U) + (0x00000040U 
                                            | (0x0000003fU 
                                               & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0000000aU))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__117__vector), 6U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__117__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__117__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl 
        = (0x0000007fU & ((IData)(0x3dU) + VL_EXTEND_II(7,6, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__118__vector 
                            = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0bU));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__118__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__118__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__118__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__120__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__120__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__120__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__120__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__122__vector 
                            = (1U & (((0U != (0x000003ffU 
                                              & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva)))) 
                                      | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva) 
                                         >> 0x0000000aU)) 
                                     & ((0U != (0x000003ffU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   & ((IData)(0x03ffU) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva))))) 
                                        | ((1U & (((IData)(0x07ffU) 
                                                   + (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva)) 
                                                  >> 0x0000000aU)) 
                                           | ((0U != 
                                               (0x000003ffU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                   & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva)))) 
                                              | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva) 
                                                 >> 0x0000000aU))))));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__122__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__122__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__122__Vfuncout)))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__119__vector 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__119__vector), 5U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__119__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__119__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__121__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__121__vector), 6U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__121__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__121__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__129__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__input_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__132__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_2)));
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl;
                    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__Vfuncout))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_2)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__133__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__sel 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
                    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__input_1)
            : 0x0eU);
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__134__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_3__1(Vsim_HLS_fp17_to_fp16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__113__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__113__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__113__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__113__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__114__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__114__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__114__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__114__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__116__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__116__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__116__vector;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__116__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__input_0;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__input_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_dp2wdma_prdy) 
           & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_100)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_14 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_37_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_35_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_2)) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2) 
                 & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__116__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1) 
                                                >> 0x0aU))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__116__vector), 4U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__116__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__input_0 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__116__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__input_0) 
           & (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__sel));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__shift_0_prb 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__115__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_11) 
           & (IData)(vlSelfRef.HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__123__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__113__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__113__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__113__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__input_1 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__113__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__114__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__114__sel;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__114__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__input_0 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__114__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__124__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__Fp17ToFp16_and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_tmp)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__137__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7)));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__135__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout;
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl))));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__input_0 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__input_0));
    __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__136__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp16___ctor_var_reset(Vsim_HLS_fp17_to_fp16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp16___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->chn_a_rsc_z = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2380236594467781804ull);
    vlSelf->chn_a_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17991353141507009153ull);
    vlSelf->chn_a_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13710593673808292217ull);
    vlSelf->chn_o_rsc_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1477624943684843811ull);
    vlSelf->chn_o_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16276632572638137710ull);
    vlSelf->chn_o_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12314530991929382410ull);
    vlSelf->__PVT__chn_a_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7490943170919625054ull);
    vlSelf->__PVT__chn_o_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11134422164122515618ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3899071044844982360ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2758142047139173357ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 314905971997985250ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14338580846388017997ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6970852589168680516ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2931700339827095616ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2775630147284089924ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_13_10 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16526476083630719438ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_9_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7267090493815211528ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17441972637318938009ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3751520856345040029ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7923513795970497675ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17180210811395524476ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6584950087085224431ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4272308819949844761ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3299424556135258494ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6176520247267796417ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6405065190741429082ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15142366753542093518ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1866130497701768170ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16074254262425933234ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14565687699312603999ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11606214248355478097ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_nor_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15373594712280065377ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14845513856871276882ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7196119516371840520ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4160886203091176979ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_16_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4505054644022408296ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6910912634829956238ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5122250974062604683ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_and_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 216070309256856911ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11383432445003076149ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9758997181553129927ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_35_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13938598402184864362ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__and_37_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7162917999819868073ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18183342274112000164ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11176266778594943079ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10998450097779011406ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17063038106444951953ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9246999085162483090ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2068763532291492336ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5969370925536464640ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8918509212849206140ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__Fp17ToFp16_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6159500342404390870ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3181372081761754239ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 553206236712794371ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3861628504071834293ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__iExpoWidth_oExpoWidth_prb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17961755427150852381ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__shift_0_prb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1497984214483032019ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13798298851005354958ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3194124516855951234ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11480498496564842137ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3502633292695191062ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3078199419082655943ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12073975847559288204ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_3_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 135615526148008394ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_2_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7414569832885592334ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1211043095298812477ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_5_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10171203726792727658ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_4_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 770012801144483629ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11394348556033690839ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_6_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16706973300942356954ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11873451392902706765ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18307643479072091770ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10581091781809113140ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6397262610976872582ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16185901167157122595ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4295658356245495007ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8203947607819843861ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7314693242710482253ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2713332250766829267ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13445683103569474283ull);
    vlSelf->HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10503977325435883295ull);
    vlSelf->HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 802220779568332127ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16262025980895416625ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17723905434488493904ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4679874469091544863ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2966065496056148903ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10572615009687960423ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16254316815053814877ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11183499202211191431ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4829142298384534193ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16627039411054029597ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9902266716226801351ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 949085344257526110ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 977472372818435630ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1550341940547029641ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11168696593542413631ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6594997516792091491ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10607349330148716581ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7643171019388600493ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 16821381555554967021ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 368838653608374653ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12438258808854372163ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3133821662857759719ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10112688745057704693ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6612384738948055191ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17018912457693064298ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2173564805059964034ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3169969687383333714ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4384426701396388605ull);
    vlSelf->__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16029693569088914119ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__0__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12230383286190004418ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__0__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1704027902389377821ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__7__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8382257940302825940ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__7__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8804063691723913534ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__9__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14418330590439155841ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__9__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15998007569275732436ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__11__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11058333033609238220ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__11__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3816206567505196804ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7800265849804926168ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17424426074651469861ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12516090444848778933ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11619917427415488884ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14568586346409825404ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6039147031370574917ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2838145132283420521ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7004771211088893120ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11183368022869028961ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9148353895793728063ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8027509175157470695ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2778372651357023244ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8115233523411407568ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11613781299362802204ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5287208927444699132ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12356294814201256639ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__arg1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8776999487580209847ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14810768407685527129ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7341158036153206001ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__37__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16624559549052226054ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__37__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8790927283333559589ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__44__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7781282354233822296ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__44__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3253095207346946804ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__46__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16980097559639192247ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__46__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 516517432143193360ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__48__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10523055796827957885ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__48__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18123101661129540679ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17569227743559087124ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2777037395240790292ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17258367026354593376ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 931641300735864065ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5903746322791516958ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9505794786816554385ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15734808849950652469ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16305547513773439265ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16012921379671164893ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11459470446808119197ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9113134105618626196ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14505675782568484712ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12919184144372519516ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17365653409901593096ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16543793415090554351ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14754953136112070237ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__arg1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8520637151029158028ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1098271766095878292ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8334159108246675609ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__74__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5715327572712447470ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__74__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16018391402992483453ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__81__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2914594338641659366ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__81__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13588562832756530361ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__83__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9167928412475442559ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__83__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10306922227526734256ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__85__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1432375373495125764ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__85__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2477128041717759703ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15029151565545576498ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3780113242358952883ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10502567978947078608ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2259183759168317040ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14293058419782001183ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13919808268278883227ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8700330867144414573ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14643766143731932476ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2501779668220597890ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14473144864990851922ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4373793081272325894ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15304532209418066322ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9920427957411372303ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11295546854987829518ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17049080701906287938ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16028875630038542634ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__arg1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3544915184643205372ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11234893946622558537ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14004641258781060182ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__111__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 387358105645489954ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__111__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4279019802570653506ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__118__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12920511704532728493ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__118__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3729855603407016984ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__120__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8210573233584820852ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__120__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15557053510034894150ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__122__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17861999041331579332ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__122__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3578828149951633454ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4215612356188803202ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3742871804398529031ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9912930956323464090ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5916503809809325443ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__input_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15374049450875632643ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7706092413923287429ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14264691338299597842ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12703370994666083029ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18425205506262135370ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8532261346213750565ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4368793276314001930ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3720400796506108571ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__arg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11318247566277237247ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9530198921050183773ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1004046667600487250ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__Vfuncout = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12673503139475348301ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__arg1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16205508525433426553ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__arg2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4384761947903480734ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 416984207596271418ull);
}
