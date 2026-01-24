// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1313__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1313__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1313__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1313__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1318__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1318__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1318__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1318__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1338__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1338__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1338__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1338__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_3.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_3.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                         >> 0x15U));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)));
        }
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 
                = (0x0000003fU & ((IData)(0x21U) + 
                                  (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                    >> 0x0000000aU) 
                                   + ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                      >> 0x0000000aU))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1318__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1318__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1318__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1318__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1329__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1331__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1321__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1330__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1333__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1334__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1319__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva 
        = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                  >> 9U) & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                             & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                                >> 0x00000015U)) | (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000005ffU 
                                                             & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                                          | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)) 
                                         | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1332__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1320__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1335__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1)) 
                   | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                                          >> 0x0aU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1336__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1336__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1336__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1336__Vfuncout)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x0000fc00U != 
                                     (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x000003ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva) 
           & (0x000ffc00U == (0x000ffc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1338__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1338__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1338__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1338__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1337__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)) 
                                     | ((0x3fU == (0x0000003fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs))) 
                                    << 1U)) | ((0x3fU 
                                                != 
                                                (0x0000003fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1322__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1363__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1339__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1339__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1339__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1339__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1339__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1339__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1345__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1324__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1313__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1313__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1313__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1313__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(((0x0000fc00U == (0x0000fc00U 
                                       & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 
        = ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1341__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1340__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1340__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1340__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1340__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1340__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1340__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1361__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1356__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1346__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1325__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1349__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1347__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1305__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1303__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1357__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1350__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1348__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1306__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1304__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_a_rdy)) 
              & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_155))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_b_rdy)) 
              & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_157))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1323__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1326__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1301__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1302__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1300__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
           & ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)) 
                & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl)));
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl)) 
           & (IData)(HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1312__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1312__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1312__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1312__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1317__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1317__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1317__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1317__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1364__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt 
        = ((IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x0000fc00U == (0x0000fc00U 
                                        & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1308__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1308__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1308__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1308__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1309__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1309__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1309__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1309__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1314__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1314__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1314__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1314__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1307__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1311__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1311__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1311__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1310__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1311__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1310__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1310__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1310__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1315__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1315__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1315__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1315__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1315__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1316__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1316__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1316__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1316__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1312__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1312__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1312__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1312__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1317__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1317__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1317__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1317__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1359__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1360__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1342__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1358__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1362__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1343__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1344__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout;
}
