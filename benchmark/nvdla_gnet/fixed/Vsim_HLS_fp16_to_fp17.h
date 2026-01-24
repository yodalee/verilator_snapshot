// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_HLS_FP16_TO_FP17_H_
#define VERILATED_VSIM_HLS_FP16_TO_FP17_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_HLS_fp16_to_fp17 final : public VerilatedModule {
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
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16;
        CData/*3:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl;
        CData/*3:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
        CData/*5:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
        CData/*3:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
        CData/*3:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
        CData/*0:0*/ HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0;
        CData/*3:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen;
        CData/*0:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__0__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__0__vector;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__12__Vfuncout;
    };
    struct {
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__12__vector;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__24__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__24__vector;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__36__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__36__vector;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__48__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__48__vector;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__60__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__60__vector;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__72__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__72__vector;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__84__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__84__vector;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__96__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__96__vector;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__108__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__108__vector;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__120__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__120__vector;
        CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__132__Vfuncout;
        CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__132__vector;
        VL_IN16(chn_a_rsc_z,15,0);
        SData/*15:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        SData/*9:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0;
        SData/*9:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
        SData/*9:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
        SData/*9:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
        SData/*9:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        SData/*9:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t;
        SData/*15:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
        SData/*15:0*/ __PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
        VL_OUT(chn_o_rsc_z,16,0);
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_HLS_fp16_to_fp17(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_HLS_fp16_to_fp17();
    VL_UNCOPYABLE(Vsim_HLS_fp16_to_fp17);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
