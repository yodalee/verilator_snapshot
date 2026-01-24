// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_54__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_54__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3835__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3835__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3835__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3835__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3836__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3836__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3836__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3836__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3839__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3839__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3839__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3839__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3843__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3843__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3843__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3843__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3847__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3847__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3847__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3847__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3853__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3853__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3853__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3853__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3856__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3856__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3856__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3856__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_54_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3903__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_54_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3904__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x08000000U != (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3248 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3834__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3840__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3840__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3840__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3840__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3840__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3841__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3841__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3841__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3841__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3841__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
                          >> 0x0000000eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3900__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[6U] 
                                                                 >> 0x00000010U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000036U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000036U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3848__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3848__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3848__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3848__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3848__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3849__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3849__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3849__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3849__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001aU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001aU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__VdfgRegularize_h6e95ff9d_0_4898) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x08000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3839__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x0000001aU))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3839__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3839__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3839__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__VdfgRegularize_h6e95ff9d_0_4897) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3859__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001aU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
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
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x04000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x08000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x08000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3860__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3865__Vfuncout;
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
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3844__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3844__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3844__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3844__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3844__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3844__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3835__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3835__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3835__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3835__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3836__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3836__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3836__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3836__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3858__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3853__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3853__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3853__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3853__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3902__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3901__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (0x08000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3845__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3845__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3845__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3845__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3845__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3845__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3897__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x08000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3857__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3857__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3857__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3857__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3855__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3855__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3855__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3855__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3855__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3846__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3846__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3846__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3846__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3846__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3842__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3842__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3842__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3842__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3842__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3898__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3898__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3898__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3898__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3898__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3899__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3899__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3899__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3899__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3856__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3856__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3856__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3856__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3847__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3847__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3847__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3847__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3843__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3843__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3843__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3843__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3888__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3854__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3852__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3850__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3866__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3837__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3868__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3861__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3889__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001aU))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3887__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001aU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3867__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001aU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3838__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001aU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3869__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001aU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3862__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3851__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001bU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3890__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001bU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3891__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001bU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3893__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001bU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3894__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3870__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x0000001aU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3863__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001aU))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3886__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3892__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3895__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3864__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3896__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_55__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_55__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3906__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3906__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3906__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3906__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3907__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3907__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3907__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3907__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3910__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3910__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3910__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3910__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3914__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3914__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3914__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3914__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3918__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3918__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3918__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3918__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3924__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3924__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3924__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3924__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3927__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3927__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3927__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3927__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_55_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__3974__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_55_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__3975__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x08000000U != (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3249 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3905__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3911__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3911__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3911__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3911__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3911__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3912__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3912__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3912__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3912__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3912__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
                          >> 0x0000000eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__3971__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[6U] 
                                                                 >> 0x00000010U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000037U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000037U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3919__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3919__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3919__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3919__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3919__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3920__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3920__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3920__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3920__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001aU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001aU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__VdfgRegularize_h6e95ff9d_0_4898) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x08000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3910__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x0000001aU))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3910__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3910__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3910__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__VdfgRegularize_h6e95ff9d_0_4897) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3930__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001aU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
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
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x04000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x08000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x08000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3931__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3936__Vfuncout;
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
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3915__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3915__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3915__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3915__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3915__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3915__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3906__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3906__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3906__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3906__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3907__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3907__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3907__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3907__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3929__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3924__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3924__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3924__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3924__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__3973__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__3972__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (0x08000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3916__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3916__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3916__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3916__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3916__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3916__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3968__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x08000000U == (0x0c000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3928__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3928__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3928__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3928__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3926__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3926__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3926__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3926__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3926__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3917__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3917__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3917__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3917__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3917__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3913__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3913__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3913__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3913__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3913__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3969__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3969__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3969__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3969__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3969__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3970__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3970__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3970__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__3970__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3927__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3927__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3927__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3927__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3918__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3918__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3918__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3918__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3914__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3914__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3914__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3914__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3959__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3925__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3923__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3921__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3937__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3908__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3939__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3932__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__3960__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001aU))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3958__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001aU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3938__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001aU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3909__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001aU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3940__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001aU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3933__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3922__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001bU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3961__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001bU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3962__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001bU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3964__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001bU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3965__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3941__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x0000001aU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3934__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001aU))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_52.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__3957__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3963__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3966__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3935__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3967__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3977__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3977__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3977__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3977__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3978__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3978__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3978__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3978__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3981__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3981__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3981__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3981__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3985__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3985__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3985__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3985__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3989__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3989__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3989__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3989__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3995__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3995__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3995__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3995__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3998__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3998__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3998__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3998__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_23 
        = (IData)(((0x10000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)) 
                   & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                   >> 0x0000001cU)))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_56_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4045__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_56_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4046__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x20000000U != (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4899 = (IData)(
                                                          ((0x20000000U 
                                                            != 
                                                            (0x30000000U 
                                                             & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)) 
                                                           | (2U 
                                                              == 
                                                              (3U 
                                                               & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                                                  >> 0x0000001cU)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp 
        = (1U & (~ ((2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                  >> 0x0000001cU))) 
                    | (1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                    >> 0x0000001cU))))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3250 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2 
        = (1U & VL_REDXOR_32((0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__3976__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3982__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3982__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3982__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3982__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__3982__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3983__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3983__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3983__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3983__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__3983__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp) 
                    | (1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                    >> 0x0000001cU))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4900 = (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                                                        >> 0x0000001cU))) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
                          >> 0x00000014U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4042__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (0x0000ffffU 
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[7U])))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__asn_21 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000038U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000038U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3990__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3990__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3990__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3990__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__3990__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3991__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3991__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3991__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__3991__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4900) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3981__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x0000001cU))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3981__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3981__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3981__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4899) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4001__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
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
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x10000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4002__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4007__Vfuncout;
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
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3986__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3986__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3986__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3986__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3986__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3986__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3977__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3977__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3977__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3977__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3978__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3978__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3978__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__3978__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4000__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3995__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3995__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3995__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__3995__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4044__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4043__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3987__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3987__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3987__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3987__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3987__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__3987__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4039__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3999__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3999__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3999__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__3999__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3997__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3997__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3997__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3997__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3997__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3988__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3988__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3988__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3988__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__3988__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3984__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3984__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3984__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3984__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__3984__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4040__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4040__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4040__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4040__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4040__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4041__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4041__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4041__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4041__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3998__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3998__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3998__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3998__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3989__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3989__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3989__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__3989__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3985__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3985__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3985__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__3985__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4030__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3996__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__3994__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3992__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4008__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3979__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4010__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4003__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4031__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001cU))) 
                       << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4029__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4009__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__3980__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4011__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4004__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__3993__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4032__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4033__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4035__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4036__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4012__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4005__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001cU))) 
                       << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4028__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001cU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4034__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001cU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4037__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4006__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4038__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_57__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_57__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4048__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4048__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4048__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4048__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4049__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4049__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4049__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4049__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4052__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4052__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4052__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4052__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4056__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4056__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4056__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4056__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4060__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4060__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4060__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4060__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4066__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4066__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4066__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4066__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4069__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4069__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4069__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4069__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_57_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4116__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_57_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4117__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x20000000U != (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3251 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4047__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4053__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4053__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4053__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4053__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4053__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4054__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4054__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4054__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4054__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4054__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
                          >> 0x00000014U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4113__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (0x0000ffffU 
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[7U])))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000039U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x00000039U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4061__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4061__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4061__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4061__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4061__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4062__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4062__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4062__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4062__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__VdfgRegularize_h6e95ff9d_0_4900) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4052__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x0000001cU))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4052__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4052__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4052__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__VdfgRegularize_h6e95ff9d_0_4899) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4072__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
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
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x10000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4073__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4078__Vfuncout;
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
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4057__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4057__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4057__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4057__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4057__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4057__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4048__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4048__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4048__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4048__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4049__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4049__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4049__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4049__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4071__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4066__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4066__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4066__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4066__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4115__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4114__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4058__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4058__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4058__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4058__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4058__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4058__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4110__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4070__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4070__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4070__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4070__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4068__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4068__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4068__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4068__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4068__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4059__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4059__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4059__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4059__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4059__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4055__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4055__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4055__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4055__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4055__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4111__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4111__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4111__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4111__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4111__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4112__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4112__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4112__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4112__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4069__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4069__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4069__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4069__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4060__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4060__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4060__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4060__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4056__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4056__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4056__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4056__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4101__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4067__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4065__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4063__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4079__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4050__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4081__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4074__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4102__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001cU))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4100__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4080__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4051__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4082__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4075__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4064__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4103__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4104__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4106__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4107__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4083__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4076__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001cU))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4099__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001cU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4105__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001cU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4108__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4077__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4109__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_58__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_58__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4119__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4119__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4119__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4119__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4120__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4120__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4120__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4120__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4123__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4123__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4123__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4123__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4127__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4127__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4127__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4127__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4131__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4131__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4131__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4131__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4137__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4137__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4137__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4137__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4140__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4140__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4140__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4140__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_58_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4187__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_58_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4188__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x20000000U != (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3252 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4118__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4124__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4124__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4124__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4124__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4124__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4125__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4125__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4125__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4125__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4125__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
                          >> 0x00000014U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4184__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (0x0000ffffU 
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[7U])))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003aU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003aU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4132__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4132__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4132__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4132__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4132__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4133__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4133__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4133__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4133__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__VdfgRegularize_h6e95ff9d_0_4900) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4123__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x0000001cU))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4123__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4123__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4123__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__VdfgRegularize_h6e95ff9d_0_4899) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4143__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
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
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x10000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4144__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4149__Vfuncout;
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
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4128__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4128__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4128__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4128__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4128__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4128__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4119__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4119__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4119__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4119__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4120__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4120__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4120__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4120__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4142__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4137__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4137__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4137__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4137__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4186__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4185__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4129__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4129__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4129__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4129__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4129__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4129__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4181__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4141__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4141__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4141__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4141__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4139__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4139__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4139__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4139__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4139__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4130__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4130__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4130__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4130__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4130__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4126__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4126__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4126__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4126__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4126__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4182__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4182__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4182__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4182__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4182__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4183__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4183__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4183__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4183__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4140__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4140__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4140__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4140__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4131__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4131__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4131__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4131__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4127__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4127__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4127__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4127__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4172__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4138__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4136__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4134__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4150__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4121__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4152__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4145__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4173__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001cU))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4171__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4151__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4122__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4153__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4146__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4135__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4174__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4175__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4177__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4178__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4154__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4147__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001cU))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4170__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001cU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4176__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001cU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4179__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4148__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4180__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_59__0(Vsim_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_CVT_cell___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_59__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__Vfuncout);
    VlWide<3>/*95:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__vector;
    VL_ZERO_W(96, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__vector);
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4190__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4190__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4190__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4190__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4191__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4191__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4191__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4191__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4194__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4194__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4194__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4194__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4198__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4198__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4198__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4198__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4202__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4202__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4202__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4202__vector = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__sel = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__input_2 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4208__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4208__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4208__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4208__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4211__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4211__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4211__vector;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4211__vector = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_2 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_0 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__input_0 = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__sel = 0;
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__Vfuncout;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__Vfuncout);
    VlWide<4>/*96:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg1;
    VL_ZERO_W(97, __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__arg1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__arg1 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__arg2 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__input_0 = 0;
    IData/*16:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__sel = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__input_0;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__input_0 = 0;
    SData/*15:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__input_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_59_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__sel)
            ? __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__input_1
            : __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__input_0);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_17_2_2__4258__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_59_d0;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__MUX_v_16_2_2__4259__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (0x20000000U != (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3253 = (
                                                   ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_9_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_d_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_alu_in_rsci_iswt0_cse));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x0f00U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00f0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_slc_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_16_itm_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__vector[0U] = 0U;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__vector[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__vector[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__Vfuncout[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__vector[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__Vfuncout[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__vector[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__Vfuncout[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__vector[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__Vfuncout[3U] 
        = (__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__vector[2U] 
           >> 0x0000001fU);
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__signext_97_96__4189__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
                 & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4195__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_data_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4195__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4195__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4195__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_17_18__4195__Vfuncout)) 
                          - VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4196__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__chn_alu_in_rsci_d_mxwt;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4196__Vfuncout 
                            = ((0x00030000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4196__vector) 
                                                              >> 0x0fU)))) 
                                               << 0x00000010U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4196__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_16_18__4196__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5))) 
                   & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_conc_3_16) 
            << 0x00000010U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5) 
                                << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_0_lpi_1_dfm_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg2 
        = (0x0000003fU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
                          >> 0x00000014U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg1[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg1[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg1[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg1[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg_a[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg1[3U];
    VL_SHIFTRS_WWI(97,97,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__arg2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (1U & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_rshift_rg__DOT__fshr_u__4255__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntMulExt_18U_16U_34U_o_mul_itm_mx0w0 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,18, 
                                                                (0x0003ffffU 
                                                                 & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSubExt_17U_16U_18U_o_acc_nl))), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,16, 
                                                                (0x0000ffffU 
                                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[7U])))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003bU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_ctrl_inst__DOT__chn_alu_in_rsci_ogwt) 
           & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                      >> 0x0000003bU)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2 
        = (IData)(((0U == (0x00018000U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a)) 
                   & (0U == (0x3000U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_15_1_lpi_1_dfm_5)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U]))) 
                                     | (~ vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U]))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
        = (0x0000000fffffffffULL & (VL_EXTEND_QQ(36,35, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4203__vector 
                            = (0x00000003ffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4203__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4203__vector 
                                                            >> 0x21U))))) 
                                << 0x00000022U) | vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4203__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2s_34_35__4203__Vfuncout)) 
                                    + VL_EXTEND_QQ(36,35, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4204__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4204__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4204__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2s_1_35__4204__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_20) 
           | (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_26 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_84_rgt 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__VdfgRegularize_h6e95ff9d_0_4900) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4194__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt) 
              & ((2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                               >> 0x0000001cU))) & 
                 ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4194__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4194__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4194__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__VdfgRegularize_h6e95ff9d_0_4899) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_7 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4214__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (2U != (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                           >> 0x0000001cU))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__leading_sign_17_0_rg__DOT__IntLeadZero_17U_leading_sign_17_0_rtn_wrs_c_42_4_sdt_4));
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
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (0x10000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8 
        = ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__xor_dcpl_2)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_30 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_dcpl_29) 
           | (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_25 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_22));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntMulExt_18U_16U_34U_o_IntMulExt_18U_16U_34U_o_or_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_if_FpIntToFloat_17U_5U_10U_else_if_or_cse 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4215__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__sel 
        = ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_65_cse;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4220__Vfuncout;
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
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2 
        = (1U & ((IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                          >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4199__sel 
                        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4)));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4199__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntShiftRight_34U_6U_17U_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4199__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4199__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4199__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4199__Vfuncout))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4190__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_2)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4190__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4190__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4190__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4191__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8) 
               & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_6) 
                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_8)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4191__sel;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4191__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__oWidth_iWidth_prb_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_1_2__4191__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_1)) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_6 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4213__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_alu_in_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_alu_in_rsci_chn_alu_in_wait_dp_inst__DOT__chn_alu_in_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4208__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | (0x0000000fU 
                                            & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s) 
                                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4208__vector), 4U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4208__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_5_1_4__4208__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__arg1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__a;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__arg2 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__arg2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__arg1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__arg1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__arg2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__Vfuncout 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u_1__4257__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__fshl_u__4256__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3) 
            & (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
           & ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4) 
              & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))));
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3 
        = (1U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_2)) 
                 | (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_4))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4200__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_and_1_tmp;
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4200__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntShiftRight_34U_6U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4200__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4200__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4200__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_15_2_2__4200__Vfuncout))));
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__input_1 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2) 
            << 9U) | (0x000001ffU & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2) 
                                     >> 6U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                          >> 6U));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4252__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva 
                    >> 5U) & (0U != (0x0000005fU & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49 
        = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
            & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_3)) 
           & (0x20000000U == (0x30000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_FpIntToFloat_17U_5U_10U_else_if_ac_int_cctor_sva 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4212__vector 
                            = ((0x0000fffeU & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0)) 
                                               << 1U)) 
                               | (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4212__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4212__vector;
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_16_17__4212__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4210__vector 
                            = ((2U & ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                    >> 0x0eU)));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4210__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4210__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4210__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4210__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4201__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 1U) | (1U & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                   >> 0x0eU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4201__Vfuncout 
                            = ((4U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4201__vector) 
                                      << 1U)) | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4201__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_2_3__4201__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl 
        = (0x00000fffU & ((IData)(1U) + VL_EXTEND_II(12,11, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4197__vector 
                            = (((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3) 
                                << 9U) | (0x000001ffU 
                                          & (~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0) 
                                                >> 6U))));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4197__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4197__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4197__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4197__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp 
        = (1U & (~ ((~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_3)) 
                    | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_mx0w0) 
                       | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_mx0w0))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
           & (0x0001ffc0U == (0x0001ffc0U & vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_sva)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out 
        = (0x00000fffU & (VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4253__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4253__Vfuncout 
                            = ((0x00000400U & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4253__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4253__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_s2u_10_11__4253__Vfuncout))) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4254__vector 
                            = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_carry_sva) 
                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_else_if_and_tmp));
                        vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4254__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4254__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__conv_u2u_1_11__4254__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4211__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_else_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4211__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4211__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_else_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4211__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4202__vector 
        = (7U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_16U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp 
        = (7U & VL_SHIFTR_III(3,3,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4202__vector), 2U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4202__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_if_acc_itm_2_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_3_1_2__4202__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4198__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_IntSaturation_17U_8U_if_acc_nl));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4198__vector), 0x0000000aU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4198__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__readslicef_11_1_10__4198__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__sel 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1) 
           & ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__input_1 
        = (0x0000001fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__input_0 
        = (0x0000001fU & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4243__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__sel 
        = (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4209__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__sel 
        = ((4U & ((~ (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                       >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)) 
                                     << 1U) & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                                               >> 9U))) 
                             | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__input_2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_15_1_sva_2));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = (0x3fU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | (0x40U & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_v_7_3_2__4207__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4205__Vfuncout;
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
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_2)) 
                 | ((IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_7) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4221__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_acc_itm_10_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__input_1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_cse))));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4192__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4223__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_10)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_tmp_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_14;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4216__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_FpIntToFloat_17U_5U_10U_else_mux_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_2_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_5_2_2__4244__Vfuncout;
    vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5 
        = (1U & ((~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_else_1_if_if_acc_1_itm_4_1)) 
                      & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpMantRNE_17U_11U_else_mux_1_nl)) 
                     | (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_int_mant_lshift_rg__DOT__s)))) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs_2)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001cU))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_o_7_1_lpi_1_dfm_1) 
                 >> 6U));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_o_15_1_lpi_1_dfm_5) 
                 >> 0x0eU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_2 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_16_sva_2;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_12_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4242__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4222__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4193__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4224__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4217__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_5)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_and_1_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_v_10_2_2__4206__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4245__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_20_cse)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_19;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4246__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4248__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001dU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_32_itm;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4249__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__sel 
        = (1U & (~ (IData)(vlSelfRef.NV_NVDLA_CDMA_CVT_cell_core_inst__DOT____VdfgRegularize_hbe1470f0_0_9)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_29_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_FpIntToFloat_17U_5U_10U_if_nor_svs;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4225__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__sel 
        = (2U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                        >> 0x0000001cU)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_15_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4218__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__sel 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_dfs) 
            << 2U) | (((1U == (3U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                                     >> 0x0000001cU))) 
                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_56.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_nor_tmp)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__nl_z_out) 
                >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_o_i17_0_sva_2)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_2));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_16U_IntSaturation_17U_16U_or_itm_2;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_2 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_o_mant_lpi_1_dfm_1));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_0) 
           & (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__sel));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_1) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__sel) 
                 >> 1U)));
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__input_2) 
              & ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__sel) 
                 >> 2U)));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__else_mux1h_11_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX1HOT_s_1_3_2__4241__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001cU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_25_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4247__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__sel 
        = (1U & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                 >> 0x0000001cU));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_7_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4250__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_4_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_30_itm)) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_58))));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_16_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4219__Vfuncout;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__sel 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_9_nl;
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__IntSaturation_17U_8U_if_slc_IntSaturation_17U_8U_if_acc_10_svs_st;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__sel)
            ? (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__input_1)
            : (IData)(__Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__input_0));
    __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_10_nl 
        = __Vfunc_NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__MUX_s_1_2_2__4251__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__FpIntToFloat_17U_5U_10U_else_i_abs_and_2_cse 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__NV_NVDLA_CDMA_CVT_cell_core_core_fsm_inst__DOT__core_wen) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__mux_17_itm)) 
              & ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_45) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_49) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_CDMA_CVT_cell_core_inst__DOT__and_dcpl_50)))));
}
