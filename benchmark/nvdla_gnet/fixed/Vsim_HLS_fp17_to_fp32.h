// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_HLS_FP17_TO_FP32_H_
#define VERILATED_VSIM_HLS_FP17_TO_FP32_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_HLS_fp17_to_fp32 final : public VerilatedModule {
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
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31;
        CData/*2:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28;
        CData/*4:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        CData/*4:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
        CData/*2:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl;
        CData/*3:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
        CData/*2:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
        CData/*4:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
        CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen;
        CData/*0:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__9__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__9__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__21__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__21__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__33__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__33__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__45__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__45__vector;
    };
    struct {
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__57__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__57__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__69__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__69__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__81__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__81__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__93__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__93__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__105__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__105__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__117__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__117__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__129__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__129__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__141__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__141__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__153__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__153__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__165__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__165__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__177__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__177__vector;
        CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__189__Vfuncout;
        CData/*1:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__189__vector;
        SData/*9:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13;
        SData/*9:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0;
        SData/*9:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
        SData/*9:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
        SData/*9:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
        VL_IN(chn_a_rsc_z,16,0);
        VL_OUT(chn_o_rsc_z,31,0);
        IData/*16:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        IData/*16:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
        IData/*16:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
        IData/*31:0*/ __PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_HLS_fp17_to_fp32(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_HLS_fp17_to_fp32();
    VL_UNCOPYABLE(Vsim_HLS_fp17_to_fp32);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
