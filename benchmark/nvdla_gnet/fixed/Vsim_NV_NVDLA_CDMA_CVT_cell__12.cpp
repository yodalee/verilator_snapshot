// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3427__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3427__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3427__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3427__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3449__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3449__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3449__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3449__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__arg2 = 0;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3454__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3453__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3452__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3456__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3457__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 0x00000018U)))) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3445__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3446__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3450__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000018U))) 
                     << 4U) | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                                 & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                       << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3449__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3449__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3449__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3449__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3448__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000018U))) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3447__Vfuncout;
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
                                      >> 0x00000018U)))) 
                     | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 0x00000018U))))))) {
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3458__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3459__Vfuncout;
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
                                     >> 0x00000018U)))) 
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3451__Vfuncout;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3455__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3408__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3242 = (
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3433__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3434__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3439__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3427__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3427__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3427__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3427__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3476__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3475__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3462__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3428__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3463__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48__1(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp 
        = (1U & (~ ((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                  >> 0x00000018U))) 
                    | (1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                    >> 0x00000018U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2 
        = (1U & VL_REDXOR_32((0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23 
        = (IData)(((0x01000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)) 
                   & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000018U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4895 = (IData)(
                                                          ((0x02000000U 
                                                            != 
                                                            (0x03000000U 
                                                             & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)) 
                                                           | (2U 
                                                              == 
                                                              (3U 
                                                               & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                                                  >> 0x00000018U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp) 
                    | (1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                    >> 0x00000018U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4896 = (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                                        >> 0x00000018U))) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3409__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3409__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3409__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3409__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3410__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3410__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3410__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3410__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3413__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3413__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3413__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3413__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3417__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3417__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3417__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3417__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3421__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3421__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3421__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3421__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3430__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3430__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3430__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3430__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_48_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3477__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_48_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3478__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000030U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000030U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
                          >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3474__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x02000000U != (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4895) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4896) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3414__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3414__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3414__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3414__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3414__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3415__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3415__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3415__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3415__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3415__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3471__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
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
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[6U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3413__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x00000018U))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3413__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3413__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3413__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3422__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3422__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3422__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3422__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3422__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3423__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3423__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3423__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3423__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3472__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3472__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3472__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3472__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3472__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3473__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3473__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3473__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3473__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x01000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3426__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3424__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3409__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3409__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3409__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3409__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3410__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3410__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3410__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3410__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3432__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3418__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3418__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3418__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3418__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3418__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3418__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000018U))) 
                       << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3461__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3425__Vfuncout;
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
              & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3419__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3419__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3419__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3419__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3419__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3419__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000018U))) 
                       << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3460__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3431__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3431__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3431__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3431__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3429__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3429__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3429__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3429__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3429__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3420__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3420__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3420__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3420__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3420__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3416__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3416__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3416__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3416__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3416__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3430__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3430__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3430__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3430__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3421__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3421__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3421__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3421__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3417__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3417__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3417__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3417__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3440__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3411__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3442__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3435__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3441__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3412__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3443__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3436__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3464__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3465__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3467__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3468__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3444__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3437__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3466__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3469__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3438__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3470__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_49__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_49__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3498__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3498__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3498__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3498__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3520__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3520__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3520__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3520__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__arg2 = 0;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3525__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3524__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3523__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3527__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3528__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 0x00000018U)))) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3516__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3517__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3521__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000018U))) 
                     << 4U) | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                          << 2U))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3520__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3520__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3520__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3520__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3519__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000018U))) 
                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                               << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                           << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3518__Vfuncout;
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
                                      >> 0x00000018U)))) 
                     | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 0x00000018U))))))) {
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3529__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3530__Vfuncout;
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
                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                   | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
                      | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt))) 
                     | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                     >> 0x00000018U)))) 
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3522__Vfuncout;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3526__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3479__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3243 = (
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3504__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3505__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3510__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3498__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3498__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3498__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3498__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3547__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3546__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3533__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3499__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3534__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_49__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_49__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3480__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3480__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3480__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3480__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3481__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3481__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3481__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3481__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3484__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3484__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3484__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3484__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3488__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3488__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3488__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3488__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3492__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3492__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3492__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3492__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3501__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3501__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3501__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3501__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_49_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3548__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_49_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3549__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000031U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000031U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
                          >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3545__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x02000000U != (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__VdfgRegularize_h6e95ff9d_0_4895) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__VdfgRegularize_h6e95ff9d_0_4896) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3485__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3485__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3485__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3485__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3485__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3486__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3486__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3486__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3486__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3486__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3542__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
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
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[6U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3484__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x00000018U))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3484__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3484__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3484__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3493__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3493__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3493__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3493__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3493__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3494__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3494__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3494__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3494__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3543__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3543__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3543__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3543__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3543__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3544__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3544__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3544__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3544__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x01000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3497__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3495__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3480__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3480__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3480__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3480__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3481__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3481__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3481__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3481__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3503__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3489__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3489__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3489__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3489__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3489__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3489__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000018U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3532__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3496__Vfuncout;
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
              & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3490__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3490__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3490__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3490__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3490__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3490__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000018U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3531__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3502__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3502__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3502__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3502__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3500__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3500__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3500__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3500__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3500__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3491__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3491__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3491__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3491__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3491__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3487__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3487__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3487__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3487__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3487__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3501__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3501__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3501__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3501__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3492__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3492__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3492__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3492__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3488__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3488__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3488__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3488__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3511__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3482__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3513__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3506__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3512__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3483__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3514__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3507__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3535__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3536__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3538__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3539__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3515__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3508__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3537__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3540__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3509__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3541__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_50__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_50__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3569__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3569__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3569__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3569__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3591__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3591__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3591__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3591__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__arg2 = 0;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3596__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3595__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3594__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3598__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3599__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 0x00000018U)))) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3587__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3588__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3592__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000018U))) 
                     << 4U) | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                          << 2U))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3591__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3591__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3591__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3591__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3590__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000018U))) 
                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                               << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                           << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3589__Vfuncout;
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
                                      >> 0x00000018U)))) 
                     | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 0x00000018U))))))) {
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3600__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3601__Vfuncout;
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
                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                   | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
                      | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt))) 
                     | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                     >> 0x00000018U)))) 
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3593__Vfuncout;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3597__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3550__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3244 = (
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3575__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3576__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3581__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3569__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3569__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3569__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3569__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3618__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3617__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3604__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3570__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3605__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_50__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_50__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3551__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3551__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3551__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3551__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3552__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3552__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3552__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3552__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3555__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3555__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3555__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3555__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3559__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3559__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3559__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3559__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3563__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3563__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3563__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3563__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3572__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3572__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3572__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3572__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_50_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3619__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_50_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3620__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000032U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000032U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
                          >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3616__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x02000000U != (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__VdfgRegularize_h6e95ff9d_0_4895) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__VdfgRegularize_h6e95ff9d_0_4896) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3556__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3556__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3556__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3556__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3556__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3557__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3557__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3557__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3557__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3557__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3613__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
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
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[6U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3555__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x00000018U))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3555__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3555__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3555__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3564__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3564__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3564__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3564__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3564__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3565__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3565__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3565__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3565__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3614__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3614__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3614__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3614__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3614__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3615__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3615__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3615__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3615__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x01000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3568__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3566__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3551__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3551__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3551__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3551__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3552__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3552__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3552__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3552__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3574__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3560__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3560__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3560__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3560__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3560__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3560__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000018U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3603__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3567__Vfuncout;
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
              & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3561__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3561__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3561__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3561__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3561__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3561__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000018U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3602__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3573__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3573__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3573__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3573__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3571__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3571__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3571__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3571__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3571__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3562__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3562__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3562__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3562__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3562__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3558__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3558__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3558__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3558__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3558__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3572__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3572__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3572__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3572__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3563__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3563__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3563__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3563__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3559__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3559__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3559__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3559__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3582__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3553__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3584__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3577__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3583__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3554__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3585__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3578__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3606__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3607__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3609__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3610__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3586__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3579__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3608__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3611__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3580__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3612__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_51__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_51__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3640__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3640__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3640__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3640__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3662__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3662__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3662__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3662__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__arg2 = 0;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3667__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3666__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3665__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3669__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3670__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 0x00000018U)))) 
                | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3658__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3659__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__3663__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000018U))) 
                     << 4U) | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                          << 2U))) 
                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3662__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3662__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3662__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__3662__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__3661__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x00000018U))) 
                     << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                               << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                           << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__3660__Vfuncout;
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
                                      >> 0x00000018U)))) 
                     | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 0x00000018U))))))) {
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3671__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3672__Vfuncout;
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
                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                   | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
                      | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt))) 
                     | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                     >> 0x00000018U)))) 
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__3664__Vfuncout;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3668__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3621__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3245 = (
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3646__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3647__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3652__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3640__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3640__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3640__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3640__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3689__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3688__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3675__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3641__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3676__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_51__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_51__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3622__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3622__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3622__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3622__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3623__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3623__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3623__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3623__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3626__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3626__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3626__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3626__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3630__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3630__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3630__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3630__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3634__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3634__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3634__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3634__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3643__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3643__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3643__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3643__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_51_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3690__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_51_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3691__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000033U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000033U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
                          >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3687__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x02000000U != (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__VdfgRegularize_h6e95ff9d_0_4895) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__VdfgRegularize_h6e95ff9d_0_4896) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3627__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3627__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3627__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3627__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3627__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3628__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3628__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3628__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3628__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3628__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3684__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
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
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[6U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3626__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x00000018U))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3626__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3626__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3626__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3635__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3635__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3635__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3635__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3635__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3636__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3636__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3636__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3636__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3685__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3685__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3685__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3685__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3685__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3686__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3686__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3686__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3686__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x01000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3639__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3637__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3622__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3622__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3622__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3622__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3623__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3623__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3623__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3623__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3645__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3631__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3631__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3631__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3631__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3631__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3631__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000018U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3674__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3638__Vfuncout;
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
              & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3632__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3632__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3632__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3632__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3632__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3632__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x00000018U))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_48.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3673__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x02000000U == (0x03000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3644__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3644__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3644__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3644__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3642__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3642__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3642__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3642__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3642__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3633__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3633__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3633__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3633__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3633__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3629__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3629__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3629__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3629__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3629__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3643__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3643__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3643__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3643__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3634__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3634__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3634__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3634__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3630__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3630__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3630__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3630__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3653__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3624__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3655__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3648__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3654__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3625__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3656__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3649__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3677__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3678__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3680__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000019U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3681__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3657__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x00000018U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3650__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3679__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3682__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3651__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3683__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}
