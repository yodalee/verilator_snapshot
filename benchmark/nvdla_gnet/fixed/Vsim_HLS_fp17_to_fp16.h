// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_HLS_FP17_TO_FP16_H_
#define VERILATED_VSIM_HLS_FP17_TO_FP16_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_HLS_fp17_to_fp16 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        VL_IN8(chn_a_rsc_vz,0,0);
        VL_OUT8(chn_a_rsc_lz,0,0);
        VL_IN8(chn_o_rsc_vz,0,0);
        VL_OUT8(chn_o_rsc_lz,0,0);
        CData/*0:0*/ __PVT__chn_a_rsci_unreg_inst__DOT__in_0;
        CData/*0:0*/ __PVT__chn_o_rsci_unreg_inst__DOT__in_0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_iswt0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__core_wten;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_iswt0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_15;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_14;
        CData/*3:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_13_10;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_tmp;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__and_tmp_1;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_7;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__or_tmp_8;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_8;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_11;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__and_dcpl_14;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_2;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_2;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_2;
        CData/*2:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_if_i_shift_acc_psp_1_sva_2;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_nor_itm_2;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_2;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_2;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_16_1;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__and_6_mdf;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_and_1_cse;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__or_cse;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__and_35_rgt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__and_37_rgt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_1_itm;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__main_stage_v_1_mx0c1;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__Fp17ToFp16_and_cse;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6_1;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__iExpoWidth_oExpoWidth_prb;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__shift_0_prb;
        CData/*3:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl;
        CData/*3:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl;
        CData/*3:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_3_nl;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_2_nl;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__or_6_nl;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_5_nl;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_4_nl;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__or_10_nl;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__mux_6_nl;
        CData/*6:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl;
        CData/*7:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl;
        CData/*5:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    };
    struct {
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
        CData/*3:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
        CData/*4:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp;
        CData/*5:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp;
        CData/*6:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp;
        CData/*0:0*/ HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_0;
        CData/*0:0*/ HLS_fp17_to_fp16_core_inst__DOT____VdfgRegularize_h126e9295_0_3;
        CData/*3:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
        CData/*1:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__core_wen;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_core_fsm_inst__DOT__state_var;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__0__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__0__vector;
        CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__7__Vfuncout;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__7__vector;
        CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__9__Vfuncout;
        CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__9__vector;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__11__vector;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__sel;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__sel;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__sbit;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__sbit;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__sbit;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__37__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__37__vector;
        CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__44__Vfuncout;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__44__vector;
        CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__46__Vfuncout;
        CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__46__vector;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__48__vector;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__sel;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__sel;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__sbit;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__sbit;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__sbit;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__74__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__74__vector;
        CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__81__Vfuncout;
    };
    struct {
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__81__vector;
        CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__83__Vfuncout;
        CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__83__vector;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__85__vector;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__sel;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__sel;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__sbit;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__sbit;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__sbit;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__111__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_4_5__111__vector;
        CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__118__Vfuncout;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_5_6__118__vector;
        CData/*6:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__120__Vfuncout;
        CData/*5:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2s_6_7__120__vector;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__122__vector;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__sel;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__sel;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__sbit;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__sbit;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__arg1;
        CData/*4:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__arg2;
        CData/*0:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__sbit;
        VL_OUT16(chn_o_rsc_z,15,0);
        SData/*9:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_o_rsci_d_9_0;
        SData/*14:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_bits_sva_1_14_0_1;
        SData/*10:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm;
        SData/*11:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva;
        SData/*10:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva;
        SData/*10:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva;
        SData/*9:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
        SData/*9:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
        SData/*9:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl;
        SData/*9:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
        SData/*11:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result;
        SData/*11:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t;
        SData/*10:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        SData/*10:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t;
        SData/*10:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result;
        SData/*10:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t;
        SData/*10:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        SData/*10:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__11__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__19__input_1;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__20__input_1;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__30__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__31__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__32__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__33__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__48__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__56__input_1;
    };
    struct {
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__57__input_1;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__67__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__68__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__69__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__70__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__85__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__93__input_1;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__94__input_1;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__104__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__105__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__106__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__107__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__conv_u2u_1_11__122__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__130__input_1;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout;
        SData/*9:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__MUX_v_10_2_2__131__input_1;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__141__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__142__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__143__Vfuncout;
        SData/*10:0*/ __Vfunc_HLS_fp17_to_fp16_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__144__Vfuncout;
        VL_IN(chn_a_rsc_z,16,0);
        IData/*16:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_d_mxwt;
        IData/*16:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
        IData/*16:0*/ __PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_HLS_fp17_to_fp16(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_HLS_fp17_to_fp16();
    VL_UNCOPYABLE(Vsim_HLS_fp17_to_fp16);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
