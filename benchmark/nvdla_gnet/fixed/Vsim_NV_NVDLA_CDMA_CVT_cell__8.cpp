// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2291__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2291__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2291__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2291__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2313__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2313__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2313__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2313__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__arg2 = 0;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2318__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2317__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2316__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2320__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2321__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 0x00000010U)))) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2309__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2310__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2314__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000010U))) 
                     << 4U) | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                                 & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                       << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2313__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2313__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2313__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2313__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2312__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000010U))) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2311__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                    & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1))) 
                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2 
                = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((((0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
                      | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                      >> 0x00000010U)))) 
                     | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 0x00000010U))))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30))) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2322__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2323__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
              & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
                    | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1))))) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                   | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
                      | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt))) 
                     | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                     >> 0x00000010U)))) 
                    | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                   | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2315__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2319__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt);
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2272__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3226 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2297__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2298__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (4U & ((~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
                                                & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3)) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                                        << 2U)))) | 
           ((2U & ((~ ((~ (IData)(((0U == (0x00018000U 
                                           & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                                   & ((~ ((~ (IData)(
                                                     ((0U 
                                                       == 
                                                       (0x00c0U 
                                                        & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                      & ((0U 
                                                          != 
                                                          (0x0030U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                         | (0U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                                >> 2U))))))) 
                                          & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                      & ((0U != (0x3000U 
                                                 & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                         | (0U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000aU)))))))) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                   << 1U)) | (1U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000dU)))) 
                                        | ((((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                               >> 0x0000000bU) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                     >> 9U)))) 
                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2)) 
                                            | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                 >> 7U) 
                                                | ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 5U))) 
                                                   | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 3U) 
                                                       | (1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                              >> 1U)))) 
                                                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                               & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7)))) 
                                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)) 
                                       & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2303__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2291__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2291__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2291__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2291__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2340__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2339__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2326__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2292__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2327__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32__1(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp 
        = (1U & (~ ((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                  >> 0x00000010U))) 
                    | (1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                    >> 0x00000010U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2 
        = (1U & VL_REDXOR_32((0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23 
        = (IData)(((0x00010000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)) 
                   & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000010U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4887 = (IData)(
                                                          ((0x00020000U 
                                                            != 
                                                            (0x00030000U 
                                                             & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)) 
                                                           | (2U 
                                                              == 
                                                              (3U 
                                                               & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                                                  >> 0x00000010U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp) 
                    | (1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                    >> 0x00000010U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4888 = (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                                        >> 0x00000010U))) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2273__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2273__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2273__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2273__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2274__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2274__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2274__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2274__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2277__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2277__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2277__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2277__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2281__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2281__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2281__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2281__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2285__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2285__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2285__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2285__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2294__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2294__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2294__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2294__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_32_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2341__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_32_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2342__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000020U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000020U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[1U] 
                          >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2338__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x00020000U != (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4887) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4888) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2278__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2278__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2278__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2278__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2278__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2279__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2279__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2279__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2279__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2279__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2335__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (0x0000ffffU 
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[4U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2277__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x00000010U))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2277__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2277__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2277__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2286__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2286__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2286__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2286__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2286__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2287__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2287__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2287__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2287__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2336__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2336__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2336__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2336__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2336__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2337__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2337__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2337__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2337__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x00010000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                    >> 0x00000022U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                       >> 0x00000010U)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000022U)) | (0U == 
                                              (0x0003ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                          >> 0x00000010U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2290__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2288__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2273__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2273__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2273__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2273__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2274__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2274__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2274__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2274__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2296__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2282__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2282__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2282__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2282__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2282__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2282__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000010U))) 
                       << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2325__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2289__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2283__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2283__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2283__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2283__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2283__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2283__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000010U))) 
                       << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2324__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2295__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2295__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2295__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2295__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2293__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2293__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2293__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2293__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2293__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2284__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2284__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2284__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2284__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2284__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2280__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2280__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2280__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2280__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2280__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2294__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2294__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2294__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2294__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2285__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2285__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2285__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2285__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2281__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2281__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2281__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2281__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1)) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2304__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2275__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2306__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2299__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2305__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2276__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2307__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2300__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2328__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2329__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2331__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2332__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2308__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2301__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2330__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2333__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2302__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2334__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_33__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_33__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2362__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2362__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2362__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2362__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2384__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2384__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2384__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2384__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__arg2 = 0;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2389__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2388__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2387__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2391__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2392__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 0x00000010U)))) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2380__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2381__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2385__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000010U))) 
                     << 4U) | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                          << 2U))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2384__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2384__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2384__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2384__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2383__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000010U))) 
                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                               << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                           << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2382__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                    & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1))) 
                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2 
                = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((((0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
                      | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                      >> 0x00000010U)))) 
                     | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 0x00000010U))))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30))) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2393__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2394__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
              & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
                    | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1))))) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                   | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
                      | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt))) 
                     | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                     >> 0x00000010U)))) 
                    | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                   | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2386__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2390__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt);
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2343__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3227 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2368__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2369__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (4U & ((~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
                                                & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3)) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                                        << 2U)))) | 
           ((2U & ((~ ((~ (IData)(((0U == (0x00018000U 
                                           & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                                   & ((~ ((~ (IData)(
                                                     ((0U 
                                                       == 
                                                       (0x00c0U 
                                                        & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                      & ((0U 
                                                          != 
                                                          (0x0030U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                         | (0U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                                >> 2U))))))) 
                                          & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                      & ((0U != (0x3000U 
                                                 & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                         | (0U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000aU)))))))) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                   << 1U)) | (1U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000dU)))) 
                                        | ((((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                               >> 0x0000000bU) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                     >> 9U)))) 
                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2)) 
                                            | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                 >> 7U) 
                                                | ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 5U))) 
                                                   | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 3U) 
                                                       | (1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                              >> 1U)))) 
                                                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                               & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7)))) 
                                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)) 
                                       & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2374__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2362__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2362__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2362__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2362__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2411__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2410__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2397__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2363__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2398__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_33__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_33__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2344__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2344__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2344__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2344__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2345__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2345__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2345__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2345__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2348__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2348__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2348__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2348__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2352__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2352__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2352__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2352__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2356__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2356__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2356__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2356__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2365__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2365__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2365__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2365__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_33_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2412__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_33_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2413__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000021U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000021U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[1U] 
                          >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2409__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x00020000U != (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__VdfgRegularize_h6e95ff9d_0_4887) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__VdfgRegularize_h6e95ff9d_0_4888) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2349__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2349__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2349__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2349__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2349__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2350__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2350__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2350__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2350__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2350__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2406__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (0x0000ffffU 
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[4U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2348__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x00000010U))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2348__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2348__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2348__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2357__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2357__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2357__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2357__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2357__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2358__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2358__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2358__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2358__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2407__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2407__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2407__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2407__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2407__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2408__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2408__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2408__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2408__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x00010000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                    >> 0x00000022U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                       >> 0x00000010U)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000022U)) | (0U == 
                                              (0x0003ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                          >> 0x00000010U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2361__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2359__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2344__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2344__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2344__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2344__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2345__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2345__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2345__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2345__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2367__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2353__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2353__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2353__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2353__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2353__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2353__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000010U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2396__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2360__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2354__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2354__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2354__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2354__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2354__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2354__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000010U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2395__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2366__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2366__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2366__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2366__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2364__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2364__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2364__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2364__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2364__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2355__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2355__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2355__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2355__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2355__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2351__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2351__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2351__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2351__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2351__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2365__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2365__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2365__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2365__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2356__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2356__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2356__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2356__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2352__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2352__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2352__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2352__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1)) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2375__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2346__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2377__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2370__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2376__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2347__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2378__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2371__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2399__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2400__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2402__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2403__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2379__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2372__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2401__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2404__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2373__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2405__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_34__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_34__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2433__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2433__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2433__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2433__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2455__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2455__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2455__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2455__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__arg2 = 0;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2460__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2459__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2458__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2462__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2463__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 0x00000010U)))) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2451__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2452__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2456__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000010U))) 
                     << 4U) | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                          << 2U))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2455__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2455__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2455__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2455__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2454__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000010U))) 
                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                               << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                           << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2453__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                    & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1))) 
                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2 
                = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((((0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
                      | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                      >> 0x00000010U)))) 
                     | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 0x00000010U))))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30))) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2464__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2465__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
              & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
                    | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1))))) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                   | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
                      | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt))) 
                     | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                     >> 0x00000010U)))) 
                    | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                   | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2457__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2461__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt);
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2414__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3228 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2439__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2440__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (4U & ((~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
                                                & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3)) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                                        << 2U)))) | 
           ((2U & ((~ ((~ (IData)(((0U == (0x00018000U 
                                           & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                                   & ((~ ((~ (IData)(
                                                     ((0U 
                                                       == 
                                                       (0x00c0U 
                                                        & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                      & ((0U 
                                                          != 
                                                          (0x0030U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                         | (0U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                                >> 2U))))))) 
                                          & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                      & ((0U != (0x3000U 
                                                 & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                         | (0U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000aU)))))))) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                   << 1U)) | (1U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000dU)))) 
                                        | ((((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                               >> 0x0000000bU) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                     >> 9U)))) 
                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2)) 
                                            | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                 >> 7U) 
                                                | ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 5U))) 
                                                   | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 3U) 
                                                       | (1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                              >> 1U)))) 
                                                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                               & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7)))) 
                                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)) 
                                       & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2445__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2433__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2433__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2433__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2433__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2482__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2481__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2468__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2434__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2469__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_34__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_34__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2415__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2415__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2415__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2415__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2416__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2416__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2416__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2416__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2419__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2419__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2419__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2419__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2423__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2423__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2423__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2423__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2427__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2427__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2427__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2427__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2436__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2436__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2436__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2436__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_34_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2483__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_34_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2484__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000022U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000022U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[1U] 
                          >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2480__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x00020000U != (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__VdfgRegularize_h6e95ff9d_0_4887) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__VdfgRegularize_h6e95ff9d_0_4888) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2420__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2420__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2420__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2420__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2420__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2421__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2421__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2421__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2421__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2421__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2477__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (0x0000ffffU 
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[4U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2419__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x00000010U))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2419__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2419__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2419__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2428__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2428__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2428__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2428__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2428__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2429__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2429__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2429__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2429__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2478__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2478__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2478__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2478__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2478__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2479__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2479__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2479__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2479__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x00010000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                    >> 0x00000022U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                       >> 0x00000010U)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000022U)) | (0U == 
                                              (0x0003ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                          >> 0x00000010U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2432__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2430__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2415__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2415__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2415__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2415__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2416__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2416__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2416__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2416__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2438__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2424__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2424__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2424__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2424__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2424__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2424__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000010U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2467__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2431__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2425__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2425__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2425__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2425__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2425__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2425__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000010U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2466__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2437__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2437__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2437__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2437__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2435__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2435__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2435__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2435__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2435__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2426__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2426__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2426__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2426__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2426__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2422__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2422__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2422__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2422__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2422__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2436__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2436__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2436__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2436__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2427__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2427__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2427__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2427__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2423__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2423__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2423__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2423__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1)) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2446__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2417__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2448__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2441__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2447__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2418__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2449__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2442__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2470__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2471__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2473__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2474__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2450__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2443__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2472__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2475__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2444__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2476__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_35__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_35__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2504__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2504__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2504__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2504__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2526__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2526__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2526__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2526__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__arg2 = 0;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2531__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2530__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2529__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2533__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2534__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 0x00000010U)))) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2522__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2523__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__2527__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000010U))) 
                     << 4U) | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                          << 2U))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2526__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2526__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2526__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__2526__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__2525__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000010U))) 
                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                               << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                           << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__2524__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                    & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1))) 
                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2 
                = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((((0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
                      | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                      >> 0x00000010U)))) 
                     | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 0x00000010U))))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30))) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2535__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2536__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
              & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
                    | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1))))) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                   | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
                      | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt))) 
                     | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                     >> 0x00000010U)))) 
                    | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                   | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__2528__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2532__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt);
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30)))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
        }
    } else {
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm = 0ULL;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs = 0U;
    }
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__2485__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3229 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2510__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2511__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (4U & ((~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
                                                & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3)) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                            | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                                        << 2U)))) | 
           ((2U & ((~ ((~ (IData)(((0U == (0x00018000U 
                                           & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                                   & ((~ ((~ (IData)(
                                                     ((0U 
                                                       == 
                                                       (0x00c0U 
                                                        & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                      & ((0U 
                                                          != 
                                                          (0x0030U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                                         | (0U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                                >> 2U))))))) 
                                          & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                      & ((0U != (0x3000U 
                                                 & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                                         | (0U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000aU)))))))) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))) 
                   << 1U)) | (1U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                      >> 0x0000000dU)))) 
                                        | ((((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                               >> 0x0000000bU) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                     >> 9U)))) 
                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2)) 
                                            | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                 >> 7U) 
                                                | ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 5U))) 
                                                   | ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                        >> 3U) 
                                                       | (1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                                              >> 1U)))) 
                                                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)))) 
                                               & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6))) 
                                           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7)))) 
                                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)) 
                                       & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2516__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2504__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2504__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2504__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__2504__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__2553__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__2552__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2539__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2505__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__2540__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_35__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_35__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2486__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2486__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2486__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2486__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2487__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2487__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2487__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2487__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2490__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2490__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2490__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2490__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2494__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2494__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2494__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2494__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2498__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2498__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2498__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2498__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2507__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2507__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2507__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2507__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_35_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__2554__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_35_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__2555__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000023U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000023U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[1U] 
                          >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__2551__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x00020000U != (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000010U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__VdfgRegularize_h6e95ff9d_0_4887) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__VdfgRegularize_h6e95ff9d_0_4888) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2491__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2491__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2491__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2491__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__2491__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2492__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2492__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2492__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2492__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__2492__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2548__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (0x0000ffffU 
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[4U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2490__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x00000010U))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2490__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2490__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2490__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2499__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2499__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2499__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2499__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__2499__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2500__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2500__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2500__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__2500__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2549__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2549__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2549__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2549__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2549__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2550__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2550__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2550__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__2550__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x00010000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                    >> 0x00000022U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                       >> 0x00000010U)))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000022U)) | (0U == 
                                              (0x0003ffffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                          >> 0x00000010U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__2503__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2501__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2486__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2486__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2486__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2486__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2487__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2487__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2487__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__2487__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2509__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2495__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2495__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2495__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2495__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2495__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2495__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000010U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2538__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__2502__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_and_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2496__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2496__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2496__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2496__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2496__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__2496__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000010U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_32.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__2537__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x00020000U == (0x00030000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2508__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2508__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2508__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__2508__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2506__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2506__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2506__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2506__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2506__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2497__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2497__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2497__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2497__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__2497__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2493__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2493__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2493__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2493__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__2493__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2507__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2507__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2507__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2507__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2498__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2498__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2498__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__2498__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2494__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2494__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2494__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__2494__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1)) 
              & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2517__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2488__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2519__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2512__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2518__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2489__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2520__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2513__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2541__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2542__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2544__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000011U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2545__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2521__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2514__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2543__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000010U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2546__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2515__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__2547__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}
