// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_add__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_add__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__6__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__6__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__6__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__6__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__7__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__7__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__7__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__7__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__25__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__25__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__25__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__25__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__25__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__25__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__25__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__25__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__24__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__26__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__7__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__7__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__7__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__7__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__30__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__32__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__32__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__32__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__32__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                  << 2U))) | (((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00600000U 
                                                          & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                        & ((~ 
                                                            (((~ (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x00006000U 
                                                                            & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                          & ((0U 
                                                                              != 
                                                                              (0x00001800U 
                                                                               & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                             | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 9U))))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                             | ((~ (IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x00000060U 
                                                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                            & ((0U 
                                                                                != 
                                                                                (0x00000018U 
                                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                               | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 1U))))))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))) 
                                                           & ((0U 
                                                               != 
                                                               (0x00180000U 
                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000011U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                       >> 0x00000016U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                              >> 0x00000014U))) 
                                                         | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                               >> 0x00000012U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000010U)))) 
                                                             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                  >> 0x0000000eU) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000cU))) 
                                                                    | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000aU) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                               >> 8U)))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                    >> 6U) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                           >> 4U))) 
                                                                      | ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                              >> 1U))) 
                                                                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10))))))) 
                                                    | (IData)(
                                                              (((0U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__66__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__65__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__6__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__6__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__6__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__6__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__13__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__13__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__13__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__13__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__28__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__14__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__14__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__14__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__14__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__33__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__40__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__12__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__58__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__60__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__59__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__57__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__62__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__64__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__63__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__61__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__11__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__9__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__10__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__36__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__37__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__38__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__38__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__38__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__38__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_add__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_add__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__67__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_add__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_add__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0.__PVT__fp_interp_vld_d1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0.__PVT__fp_interp_vld_d1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_add__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_add__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__22__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__22__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__22__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__22__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__56__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__56__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__56__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__56__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0.__PVT__pipe_p10__DOT__p10_pipe_data;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__68__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp 
        = ((0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x0000000aU)) == (0x0000003fU 
                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x0aU))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__21__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__21__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__21__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__21__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__5__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__22__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__22__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__22__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__22__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__54__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__55__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__56__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__56__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__56__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__56__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__34__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__34__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__34__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__34__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__34__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__34__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__35__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__35__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__35__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__35__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__35__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__35__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_add__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__u_fp_add__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0.interp_out_rdy)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__45__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__50__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__51__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__20__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_add__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_add__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__75__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__75__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__75__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__75__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__76__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__76__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__76__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__76__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__94__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__94__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__94__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__94__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__94__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__94__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__94__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__94__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__93__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__95__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__76__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__76__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__76__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__76__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__96__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__99__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__101__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__101__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__101__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__101__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                  << 2U))) | (((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00600000U 
                                                          & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                        & ((~ 
                                                            (((~ (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x00006000U 
                                                                            & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                          & ((0U 
                                                                              != 
                                                                              (0x00001800U 
                                                                               & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                             | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 9U))))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                             | ((~ (IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x00000060U 
                                                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                            & ((0U 
                                                                                != 
                                                                                (0x00000018U 
                                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                               | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 1U))))))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))) 
                                                           & ((0U 
                                                               != 
                                                               (0x00180000U 
                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000011U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                       >> 0x00000016U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                              >> 0x00000014U))) 
                                                         | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                               >> 0x00000012U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000010U)))) 
                                                             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                  >> 0x0000000eU) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000cU))) 
                                                                    | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000aU) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                               >> 8U)))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                    >> 6U) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                           >> 4U))) 
                                                                      | ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                              >> 1U))) 
                                                                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10))))))) 
                                                    | (IData)(
                                                              (((0U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__135__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__134__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__75__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__75__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__75__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__75__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__98__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__100__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__82__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__82__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__82__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__82__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__97__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__77__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__83__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__83__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__83__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__83__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__102__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__109__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__81__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__127__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__129__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__128__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__126__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__131__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__133__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__132__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__130__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__80__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__78__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__79__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__105__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__106__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__107__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__107__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__107__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__107__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_add__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_add__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__136__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_add__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_add__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1.__PVT__fp_interp_vld_d1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1.__PVT__fp_interp_vld_d1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_add__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_add__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__74__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__74__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__74__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__74__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__91__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__91__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__91__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__91__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__125__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__125__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__125__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__125__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1.__PVT__pipe_p10__DOT__p10_pipe_data;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__137__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp 
        = ((0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x0000000aU)) == (0x0000003fU 
                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x0aU))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__73__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__73__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__73__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__73__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__90__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__90__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__90__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__90__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__74__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__74__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__74__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__74__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__91__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__91__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__91__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__91__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__123__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__124__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__125__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__125__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__125__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__125__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__103__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__103__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__103__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__103__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__103__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__103__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__104__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__104__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__104__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__104__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__104__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__104__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_add__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__u_fp_add__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1.interp_out_rdy)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__71__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__72__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__112__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__113__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__110__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__111__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_add__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_add__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__144__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__144__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__144__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__144__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__145__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__145__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__145__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__145__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__163__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__163__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__163__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__163__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__163__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__163__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__163__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__163__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__162__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__161__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__164__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__145__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__145__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__145__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__145__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__165__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__168__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__170__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__170__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__170__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__170__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                  << 2U))) | (((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00600000U 
                                                          & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                        & ((~ 
                                                            (((~ (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x00006000U 
                                                                            & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                          & ((0U 
                                                                              != 
                                                                              (0x00001800U 
                                                                               & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                             | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 9U))))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                             | ((~ (IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x00000060U 
                                                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                            & ((0U 
                                                                                != 
                                                                                (0x00000018U 
                                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                               | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 1U))))))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))) 
                                                           & ((0U 
                                                               != 
                                                               (0x00180000U 
                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000011U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                       >> 0x00000016U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                              >> 0x00000014U))) 
                                                         | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                               >> 0x00000012U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000010U)))) 
                                                             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                  >> 0x0000000eU) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000cU))) 
                                                                    | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000aU) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                               >> 8U)))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                    >> 6U) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                           >> 4U))) 
                                                                      | ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                              >> 1U))) 
                                                                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10))))))) 
                                                    | (IData)(
                                                              (((0U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__204__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__203__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__144__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__144__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__144__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__144__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__167__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__151__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__151__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__151__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__151__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__166__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__152__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__152__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__152__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__152__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__171__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__178__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__150__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__196__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__198__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__197__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__195__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__200__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__202__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__201__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__199__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__149__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__147__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__148__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__174__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__175__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__176__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__176__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__176__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__176__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_add__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_add__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__205__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_add__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_add__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2.__PVT__fp_interp_vld_d1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2.__PVT__fp_interp_vld_d1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_add__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_add__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__143__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__143__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__143__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__143__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__160__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__160__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__160__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__160__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__194__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__194__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__194__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__194__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2.__PVT__pipe_p10__DOT__p10_pipe_data;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__206__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp 
        = ((0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x0000000aU)) == (0x0000003fU 
                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x0aU))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__142__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__142__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__142__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__142__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__159__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__159__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__159__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__159__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__143__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__143__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__143__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__143__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__160__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__160__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__160__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__160__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__192__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__193__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__194__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__194__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__194__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__194__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__172__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__172__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__172__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__172__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__172__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__172__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__173__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__173__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__173__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__173__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__173__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__173__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_add__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__u_fp_add__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2.interp_out_rdy)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__140__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__177__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__141__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__153__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__154__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__181__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__155__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__182__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__158__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__179__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_add__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_add__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__213__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__213__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__213__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__213__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__214__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__214__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__214__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__214__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__232__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__232__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__232__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__232__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__232__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__232__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__232__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__232__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__231__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__230__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__233__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__214__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__214__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__214__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__214__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__237__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__239__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__239__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__239__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__239__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                  << 2U))) | (((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00600000U 
                                                          & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                        & ((~ 
                                                            (((~ (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x00006000U 
                                                                            & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                          & ((0U 
                                                                              != 
                                                                              (0x00001800U 
                                                                               & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                             | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 9U))))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                             | ((~ (IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x00000060U 
                                                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                            & ((0U 
                                                                                != 
                                                                                (0x00000018U 
                                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                               | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 1U))))))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))) 
                                                           & ((0U 
                                                               != 
                                                               (0x00180000U 
                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000011U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                       >> 0x00000016U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                              >> 0x00000014U))) 
                                                         | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                               >> 0x00000012U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000010U)))) 
                                                             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                  >> 0x0000000eU) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000cU))) 
                                                                    | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000aU) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                               >> 8U)))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                    >> 6U) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                           >> 4U))) 
                                                                      | ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                              >> 1U))) 
                                                                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10))))))) 
                                                    | (IData)(
                                                              (((0U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__273__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__272__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__213__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__213__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__213__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__213__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__236__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__220__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__220__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__220__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__220__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__235__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__215__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__221__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__221__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__221__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__221__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__240__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__247__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__219__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__265__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__267__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__266__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__264__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__269__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__271__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__270__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__268__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__218__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__216__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__217__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__243__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__244__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__245__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__245__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__245__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__245__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_add__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_add__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__274__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_add__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_add__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3.__PVT__fp_interp_vld_d1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3.__PVT__fp_interp_vld_d1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_add__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_add__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__212__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__212__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__212__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__212__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__229__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__229__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__229__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__229__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__263__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__263__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__263__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__263__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3.__PVT__pipe_p10__DOT__p10_pipe_data;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__275__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp 
        = ((0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x0000000aU)) == (0x0000003fU 
                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x0aU))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__211__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__211__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__211__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__211__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__228__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__228__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__228__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__228__Vfuncout))))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__212__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__212__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__212__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__212__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__229__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__229__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__229__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__229__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__261__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__262__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__263__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__263__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__263__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__263__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__241__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__241__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__241__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__241__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__241__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__241__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__242__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__242__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__242__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__242__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__242__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__242__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_add__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__u_fp_add__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3.interp_out_rdy)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__254__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__209__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__256__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__255__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__246__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__210__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__225__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__252__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__250__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__224__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__258__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__260__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__251__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__226__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__253__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__227__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__249__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__u_fp_add__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__u_fp_add__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__282__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__282__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__282__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__282__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__283__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__283__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__283__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__283__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__301__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__301__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__301__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__301__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__301__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__301__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__301__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__301__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__300__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__299__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__302__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__283__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__283__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__283__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__283__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__303__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__306__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__308__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__308__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__308__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__308__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                  << 2U))) | (((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00600000U 
                                                          & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                        & ((~ 
                                                            (((~ (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x00006000U 
                                                                            & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                          & ((0U 
                                                                              != 
                                                                              (0x00001800U 
                                                                               & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                             | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 9U))))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                             | ((~ (IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x00000060U 
                                                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                            & ((0U 
                                                                                != 
                                                                                (0x00000018U 
                                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                               | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 1U))))))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))) 
                                                           & ((0U 
                                                               != 
                                                               (0x00180000U 
                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000011U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                       >> 0x00000016U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                              >> 0x00000014U))) 
                                                         | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                               >> 0x00000012U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000010U)))) 
                                                             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                  >> 0x0000000eU) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000cU))) 
                                                                    | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000aU) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                               >> 8U)))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                    >> 6U) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                           >> 4U))) 
                                                                      | ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                              >> 1U))) 
                                                                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10))))))) 
                                                    | (IData)(
                                                              (((0U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__342__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__341__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__282__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__282__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__282__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__282__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__305__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__289__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__289__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__289__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__289__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__304__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__284__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__290__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__290__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__290__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__290__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__309__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__316__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__288__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__334__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__336__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__335__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__333__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__338__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__340__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__339__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__337__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__287__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__285__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__286__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__312__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__313__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__314__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__314__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__314__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__314__Vfuncout))));
}
