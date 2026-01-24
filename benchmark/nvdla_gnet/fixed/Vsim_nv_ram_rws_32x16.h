// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_NV_RAM_RWS_32X16_H_
#define VERILATED_VSIM_NV_RAM_RWS_32X16_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsim_ScanShareSel_JTAG_reg_ext_cg__pi7;


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_nv_ram_rws_32x16 final : public VerilatedModule {
  public:
    // CELLS
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi7* __PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0;
    Vsim_ScanShareSel_JTAG_reg_ext_cg__pi7* __PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(ra,4,0);
        VL_IN8(re,0,0);
        VL_IN8(wa,4,0);
        VL_IN8(we,0,0);
        CData/*0:0*/ __PVT__SO_int_net;
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__re;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__we;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk;
        CData/*4:0*/ __PVT__r_nv_ram_rws_32x16__DOT__Ra_array_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ctx_ctrl_we;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__shiftDR_en;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync;
        CData/*4:0*/ __PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__we_q;
        CData/*4:0*/ __PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__access_en_r;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__re_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__mbist_ce_r0_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__E;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd;
        CData/*4:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA;
        CData/*4:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk;
        CData/*4:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk;
        CData/*4:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2799;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2800;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2801;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2802;
    };
    struct {
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2803;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2804;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2805;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2806;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2807;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2808;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2809;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2810;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2811;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2812;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2813;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2814;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2815;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2816;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2817;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2818;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2819;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2820;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2821;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2822;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2823;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2824;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2825;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2826;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2827;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2828;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2829;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2830;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2831;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2832;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2833;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2834;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2835;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2836;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2837;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2838;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2839;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2840;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2841;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2842;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2843;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2844;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2845;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2846;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2847;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2848;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2849;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2850;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2851;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2852;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2853;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2854;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2855;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2856;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2857;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2858;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2859;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2860;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2861;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2862;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2863;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2864;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2865;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2866;
    };
    struct {
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2867;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2868;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2869;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2870;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2871;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2872;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2873;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2874;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2875;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2876;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2877;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2878;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2879;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2880;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2881;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2882;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2883;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2884;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2885;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2886;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2887;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2888;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2889;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2890;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2891;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2892;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2893;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2894;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2895;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2896;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2897;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2898;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2899;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2900;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2901;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2902;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2903;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2904;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2905;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2906;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2907;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2908;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2909;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2910;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2911;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2912;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2913;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2914;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2915;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2916;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2917;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2918;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2919;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2920;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2921;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2922;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2923;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2924;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2925;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2926;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v0;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v0;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v0;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v1;
    };
    struct {
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v1;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v1;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v2;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v3;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v3;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v3;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v4;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v4;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v4;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v5;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v5;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v5;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v6;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v6;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v6;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v7;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v7;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v7;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v8;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v8;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v8;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v9;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v9;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v9;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v10;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v10;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v10;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v11;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v11;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v11;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v12;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v12;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v12;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v13;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v13;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v13;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v14;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v14;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v14;
        CData/*0:0*/ __VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v15;
        CData/*4:0*/ __VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v15;
        CData/*0:0*/ __VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v15;
        VL_OUT16(dout,15,0);
        VL_IN16(di,15,0);
        SData/*15:0*/ __PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net;
        SData/*15:0*/ __PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0;
        SData/*15:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD;
        SData/*15:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat;
        SData/*15:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk;
        SData/*15:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr;
        SData/*15:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff;
        SData/*15:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk;
        SData/*15:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
        SData/*15:0*/ __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2;
        VL_IN(pwrbus_ram_pd,31,0);
        VlUnpacked<SData/*15:0*/, 32> __PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array;
    };

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_nv_ram_rws_32x16(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_nv_ram_rws_32x16();
    VL_UNCOPYABLE(Vsim_nv_ram_rws_32x16);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
