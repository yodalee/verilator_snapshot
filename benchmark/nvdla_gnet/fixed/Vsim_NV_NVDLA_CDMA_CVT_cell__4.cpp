// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1155__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1155__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1155__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1155__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1177__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1177__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1177__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1177__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__arg2 = 0;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1182__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1181__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1180__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1184__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1185__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 8U)))) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1173__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1174__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1178__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 8U))) << 4U) 
                    | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                         & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                        << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                  << 2U))) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1177__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1177__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1177__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1177__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1176__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 8U))) << 3U) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                       << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1175__Vfuncout;
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
                                      >> 8U)))) | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 8U))))))) {
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1186__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1187__Vfuncout;
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
                                     >> 8U)))) | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1179__Vfuncout;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1183__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1136__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3210 = (
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1161__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1162__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1167__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1155__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1155__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1155__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1155__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1204__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1203__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1190__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1156__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1191__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16__1(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp 
        = (1U & (~ ((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                  >> 8U))) | (1U == 
                                              (3U & 
                                               (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                                >> 8U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2 
        = (1U & VL_REDXOR_16((0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23 
        = (IData)(((0x00000100U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)) 
                   & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 8U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4879 = (IData)(
                                                          ((0x00000200U 
                                                            != 
                                                            (0x00000300U 
                                                             & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)) 
                                                           | (2U 
                                                              == 
                                                              (3U 
                                                               & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                                                  >> 8U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp) 
                    | (1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                    >> 8U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4880 = (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                                        >> 8U))) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1137__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1137__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1137__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1137__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1138__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1138__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1138__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1138__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1141__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1141__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1141__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1141__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1145__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1145__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1145__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1145__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1149__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1149__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1149__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1149__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1158__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1158__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1158__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1158__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_16_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1206__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_16_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1205__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000010U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000010U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[0U] 
                          >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1202__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x00000200U != (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4879) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4880) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1142__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1142__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1142__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1142__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1142__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1143__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1143__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1143__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1143__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1143__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1199__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
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
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[2U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1141__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 8U))) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                                           & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                                ? 2U
                                                : 1U) 
                                              >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1141__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1141__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1141__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1150__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1150__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1150__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1150__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1150__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1151__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1151__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1151__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1151__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1200__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1200__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1200__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1200__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1200__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1201__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1201__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1201__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1201__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x00000100U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1154__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1152__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1137__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1137__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1137__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1137__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1138__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1138__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1138__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1138__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1160__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1146__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1146__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1146__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1146__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1146__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1146__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 8U))) << 1U) 
                      | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1189__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1153__Vfuncout;
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
              & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1147__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1147__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1147__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1147__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1147__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1147__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 8U))) << 1U) 
                      | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1188__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1159__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1159__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1159__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1159__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1157__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1157__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1157__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1157__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1157__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1148__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1148__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1148__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1148__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1148__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1144__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1144__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1144__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1144__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1144__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1158__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1158__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1158__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1158__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1149__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1149__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1149__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1149__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1145__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1145__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1145__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1145__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1168__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1139__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1170__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1163__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1169__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1140__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1171__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1164__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1192__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1193__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1195__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1196__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1172__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1194__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_17__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1226__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1226__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1226__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1226__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1248__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1248__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1248__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1248__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__arg2 = 0;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1253__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1252__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1251__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1255__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1256__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 8U)))) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1244__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1245__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1249__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 8U))) << 4U) 
                    | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                         & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                        << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                   & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                  << 2U))) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1248__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1248__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1248__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1248__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1247__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 8U))) << 3U) 
                    | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                       << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1246__Vfuncout;
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
                                      >> 8U)))) | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 8U))))))) {
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1257__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1258__Vfuncout;
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
                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                   | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
                      | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt))) 
                     | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                     >> 8U)))) | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1250__Vfuncout;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1207__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3211 = (
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1233__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1226__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1226__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1226__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1226__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1275__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1274__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1261__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1227__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1262__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_17__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1208__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1208__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1208__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1208__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1209__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1209__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1209__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1209__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1212__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1212__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1212__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1212__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1216__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1216__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1216__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1216__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1220__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1220__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1220__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1220__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1229__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1229__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1229__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1229__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_17_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1277__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_17_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1276__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000011U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000011U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[0U] 
                          >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1273__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x00000200U != (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__VdfgRegularize_h6e95ff9d_0_4879) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__VdfgRegularize_h6e95ff9d_0_4880) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1213__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1213__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1213__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1213__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1213__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1214__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1214__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1214__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1214__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1214__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1270__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
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
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[2U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1212__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 8U))) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                                           & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                                ? 2U
                                                : 1U) 
                                              >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1212__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1212__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1212__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1221__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1221__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1221__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1221__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1221__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1222__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1222__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1222__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1222__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1271__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1271__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1271__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1271__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1271__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1272__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1272__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1272__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1272__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x00000100U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1225__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1223__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1208__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1208__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1208__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1208__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1209__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1209__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1209__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1209__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1231__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1217__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1217__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1217__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1217__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1217__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1217__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 8U))) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1260__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1224__Vfuncout;
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
              & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1218__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1218__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1218__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1218__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1218__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1218__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 8U))) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1259__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1230__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1230__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1230__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1230__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1228__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1228__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1228__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1228__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1228__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1219__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1219__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1219__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1219__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1219__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1215__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1215__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1215__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1215__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1215__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1229__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1229__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1229__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1229__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1220__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1220__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1220__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1220__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1216__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1216__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1216__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1216__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1210__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1234__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1211__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1242__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1263__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1264__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1266__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1267__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1243__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1236__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1265__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1268__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1237__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1269__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_18__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_18__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1297__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1297__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1297__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1297__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1319__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1319__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1319__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1319__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__arg2 = 0;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1324__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1323__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1322__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1326__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1327__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 8U)))) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1315__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1316__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1320__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 8U))) << 4U) 
                    | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                         & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                        << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                   & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                  << 2U))) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1319__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1319__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1319__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1319__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1318__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 8U))) << 3U) 
                    | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                       << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1317__Vfuncout;
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
                                      >> 8U)))) | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 8U))))))) {
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1328__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1329__Vfuncout;
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
                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                   | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
                      | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt))) 
                     | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                     >> 8U)))) | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1321__Vfuncout;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1325__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1278__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3212 = (
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1303__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1304__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1309__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1297__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1297__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1297__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1297__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1346__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1345__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1332__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1298__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1333__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_18__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_18__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1279__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1279__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1279__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1279__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1280__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1280__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1280__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1283__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1283__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1283__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1283__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1287__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1287__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1287__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1287__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1291__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1291__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1291__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1291__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1300__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1300__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1300__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1300__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_18_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1348__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_18_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1347__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000012U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000012U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[0U] 
                          >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1344__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x00000200U != (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__VdfgRegularize_h6e95ff9d_0_4879) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__VdfgRegularize_h6e95ff9d_0_4880) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1284__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1284__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1284__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1284__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1284__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1285__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1285__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1285__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1285__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1285__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1341__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
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
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[2U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1283__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 8U))) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                                           & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                                ? 2U
                                                : 1U) 
                                              >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1283__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1283__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1283__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1292__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1292__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1292__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1292__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1292__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1293__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1293__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1293__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1293__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1342__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1342__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1342__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1342__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1342__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1343__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1343__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1343__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1343__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x00000100U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1296__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1294__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1279__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1279__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1279__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1279__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1280__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1280__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1280__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1280__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1302__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1288__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1288__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1288__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1288__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1288__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1288__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 8U))) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1331__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1295__Vfuncout;
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
              & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1289__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1289__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1289__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1289__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1289__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1289__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 8U))) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1330__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1301__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1301__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1301__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1301__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1299__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1299__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1299__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1299__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1299__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1290__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1290__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1290__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1290__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1290__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1286__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1286__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1286__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1286__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1286__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1300__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1300__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1300__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1300__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1291__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1291__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1291__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1291__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1287__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1287__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1287__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1287__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1310__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1281__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1312__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1305__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1311__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1282__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1313__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1306__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1334__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1335__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1337__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1338__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1314__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1307__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1336__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1339__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1308__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1340__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_19__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_19__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1368__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1368__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1368__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1368__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__sel = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_3 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_2 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_1 = 0;
    SData/*8:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_0 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_4;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_4 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_3;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_3 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1390__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1390__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1390__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1390__vector = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__Vfuncout = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__input_0 = 0;
    QData/*32:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_2 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_1 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__sel = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__input_0 = 0;
    SData/*14:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__sel = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__arg2 = 0;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__input_0 
                = (1U & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                         >> 0x00000010U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1395__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_2 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_0) 
                   & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__sel));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_1) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__input_2) 
                      & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__sel) 
                         >> 2U)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1394__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_2 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1393__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1397__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
                  & (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt))) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1398__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
                 & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                 >> 8U)))) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25)))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1386__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                         >> 0x0fU));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1387__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse)) 
             & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6))) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__input_0 
                = (0x00000001ffffffffULL & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__sel)
                    ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__input_1
                    : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__input_0);
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_33_2_2__1391__Vfuncout;
        }
        if (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_and_1_cse) {
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 8U))) << 4U) 
                    | ((((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5) 
                         & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                        << 3U) | (((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)) 
                                   & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21)) 
                                  << 2U))) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1390__vector 
                = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                         >> 6U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1390__Vfuncout 
                = (0x0000001fU & (- (IData)((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1390__vector))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_0 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_5_1__1390__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_1 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                                  >> 9U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_3 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_4 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | (0x1eU & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__sel) 
                                                >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__sel) 
                                          >> 3U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__input_4) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__sel) 
                                          >> 4U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_14_10 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_5_5_2__1389__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__sel 
                = ((((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 8U))) << 3U) 
                    | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21) 
                       << 2U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_0 
                = ((0x00000180U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                                                >> 6U)))) 
                                   << 7U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_1 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_2 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1) 
                                  >> 1U));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_3 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__i_data_sva_2_15_0_1) 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__sel) 
                                          >> 3U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_9_4_2__1388__Vfuncout;
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
                                      >> 8U)))) | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)) 
                   | (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                   >> 8U))))))) {
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__input_0 
                = (1U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva);
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1399__Vfuncout;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__input_0 
                = (0x00007fffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
                                  >> 1U));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1400__Vfuncout;
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
                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                   | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)))))) {
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
        }
        if (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
                      | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt))) 
                     | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                     >> 8U)))) | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__sel 
                = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_IntSaturation_17U_16U_o_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_and_1_rgt)));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__input_2 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = (0x3fffU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__sel)))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | (0x4000U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__sel) 
                                                  >> 1U))))));
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__sel) 
                                          >> 2U))))));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_15_3_2__1392__Vfuncout;
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
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__sel 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__input_1 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__input_0 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__sel)
                    ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__input_1)
                    : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__input_0));
            __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__Vfuncout 
                = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2 
                = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1396__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__1349__Vfuncout[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3213 = (
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1374__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1375__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1380__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1368__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1368__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1368__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__1368__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__1417__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__1416__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1403__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1369__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__1404__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
}

void Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_19__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_19__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1350__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1350__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1350__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1350__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1351__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1351__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1351__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1351__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1354__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1354__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1354__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1354__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1358__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1358__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1358__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1358__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1362__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1362__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1362__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1362__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1371__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1371__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1371__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1371__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_19_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__1419__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_19_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__1418__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000013U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000013U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[0U] 
                          >> 0x00000018U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__1415__Vfuncout[3U];
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x00000200U != (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 8U))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__VdfgRegularize_h6e95ff9d_0_4879) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__VdfgRegularize_h6e95ff9d_0_4880) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1355__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1355__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1355__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1355__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__1355__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1356__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1356__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1356__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1356__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__1356__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1412__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
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
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[2U])))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1354__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 8U))) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                                           & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                                                ? 2U
                                                : 1U) 
                                              >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1354__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1354__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1354__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1363__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1363__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1363__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1363__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__1363__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1364__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1364__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1364__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__1364__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1413__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1413__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1413__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1413__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1413__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1414__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1414__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1414__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__1414__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x00000100U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__1367__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1365__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1350__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1350__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1350__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1350__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1351__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1351__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1351__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__1351__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1373__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1359__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1359__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1359__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1359__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1359__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1359__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 8U))) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1402__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__1366__Vfuncout;
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
              & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1360__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1360__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1360__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1360__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1360__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__1360__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 8U))) << 1U) 
                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_16.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__1401__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x00000200U == (0x00000300U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1372__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1372__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1372__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__1372__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1370__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1370__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1370__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1370__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1370__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1361__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1361__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1361__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1361__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__1361__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1357__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1357__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1357__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1357__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__1357__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1371__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1371__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1371__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1371__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1362__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1362__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1362__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__1362__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1358__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1358__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1358__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__1358__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1381__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1383__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1376__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1382__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1384__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1377__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1405__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1406__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1408__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 9U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1409__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1385__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 8U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1378__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1407__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 8U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1410__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1379__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__1411__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}
